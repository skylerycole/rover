import sys
import rclpy
from rclpy.node import Node
from interfaces.srv import Steer

class SteerClient(Node):
    def __init__(self):
        super().__init__('steer_client')
        self.client = self.create_client(Steer, 'steer')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("waiting for service")
        self.req = Steer.Request()

    def send_request(self, angle):
        self.req.angle = angle
        self.future = self.client.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

def main(args=None):
    rclpy.init(args=args)
    client = SteerClient()

    angle = int(sys.argv[1])
    client.get_logger().info(f"Sending Request to Steer:\n  Angle: {angle}")
    response = client.send_request(angle)
    if response.success:
        client.get_logger().info('Finished')
    else:
        client.get_logger().info('Error occurred')
    client.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()