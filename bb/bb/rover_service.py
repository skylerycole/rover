import sys
sys.path.append('/home/rover/ros_ws/src/bb/bb/drivers')
from robot import Robot
import rclpy
from rclpy.node import Node

# interfaces
from interfaces.srv import Drive, Steer

class RoverService(Node):
    def __init__(self):
        super().__init__('rover_service')
        self.robot = Robot()
        self.drive_srv = self.create_service(Drive, 'drive', self.driveCallback)
        self.steer_srv = self.create_service(Steer, 'steer', self.steerCallback)
        self.get_logger().info('Rover Service initialized')
        self.get_logger().info('Drive service available at: %s' % self.drive_srv.srv_name)
        self.get_logger().info('Steer service available at: %s' % self.steer_srv.srv_name)
    
    def driveCallback(self, request, response):
        self.get_logger().info("Received Drive message left: " + str(request.left_speed) + " right: " + str(request.right_speed) + " duration: " + str(request.duration))
        self.robot.drive(request.left_speed, request.right_speed, request.duration)
        response.success = True
        return response
    

    def steerCallback(self, request, response):
        self.get_logger().info("Received Steer message angle: " + str(request.angle))
        self.robot.steer(request.angle)
        response.success = True
        return response

def main(args=None):
    rclpy.init(args=args)
    node = RoverService()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        print('Caught keyboard interrupt')
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__=="__main__":
    main()
    
    