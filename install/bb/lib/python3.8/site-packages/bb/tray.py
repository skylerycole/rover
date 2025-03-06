import sys
import rclpy
from rclpy.node import Node
from interfaces.srv import Tray

class TrayClient(Node):
    def __init__(self):
        super().__init__('tray_client')
        self.client = self.create_client(Tray, 'tray')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("waiting for service")
        self.req = Tray.Request()

    def send_request(self, steps, delay):
        self.req.steps = steps
        self.req.delay = delay
        self.future = self.client.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

def main(args=None):
    rclpy.init(args=args)
    client = TrayClient()

    steps = int(sys.argv[1])
    delay = float(sys.argv[2])
    client.get_logger().info(f"Sending Request to Tray:\n  Steps: {steps}\n  Delay: {delay} seconds")
    response = client.send_request(steps, delay)
    
    if response.success:
        client.get_logger().info('Finished')
    else:
        client.get_logger().info('Error occurred')
    client.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
