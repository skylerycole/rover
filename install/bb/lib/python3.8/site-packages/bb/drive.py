import sys
import rclpy
from rclpy.node import Node
from interfaces.srv import Drive

class DriveClient(Node):
    def __init__(self):
        super().__init__('drive_client')
        self.client = self.create_client(Drive, 'drive')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("waiting for service")
        self.req = Drive.Request()

    def send_request(self, left_speed, right_speed, duration):
        self.req.left_speed = left_speed
        self.req.right_speed = right_speed
        self.req.duration = duration
        self.future = self.client.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

def main(args=None):
    rclpy.init(args=args)
    client = DriveClient()

    left_speed = float(sys.argv[1])
    right_speed = float(sys.argv[2])
    duration = float(sys.argv[3])
    client.get_logger().info(f"Sending Request to Drive:\n  Left Speed: {left_speed}\n  Right Speed: {right_speed}\n  Duration: {duration} seconds")
    response = client.send_request(left_speed, right_speed, duration)
    
    if response.success:
        client.get_logger().info('Finished')
    else:
        client.get_logger().info('Error occurred')
    client.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()