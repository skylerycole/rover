import sys
import rclpy
from rclpy.node import Node
from interfaces.srv import Drill

class DrillClient(Node):
    def __init__(self):
        super().__init__('drill_client')
        self.client = self.create_client(Drill, 'drill')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("waiting for service")
        self.req = Drill.Request()

    def send_request(self, steps, delay):
        self.req.steps = steps
        self.req.delay = delay
        self.future = self.client.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

def main(args=None):
    rclpy.init(args=args)
    client = DrillClient()

    steps  = int(sys.argv[1])
    delay = float(sys.argv[2])
    client.get_logger().info(f"Sending Request to Drill:\n  Steps: {steps}\n  Delay: {delay} seconds")
    response = client.send_request(steps, delay)
    
    if response.success:
        client.get_logger().info('Finished')
    else:
        client.get_logger().info('Error occurred')
    client.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
