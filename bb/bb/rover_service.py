import sys
sys.path.append('/home/rover/ros_ws/src/bb/bb/drivers')
from robot import Robot
import rclpy
from rclpy.node import Node

# service
from interfaces.srv import Drive

class RoverService(Node):
    def __init__(self):
        super().__init__('rover_service')
        self.robot = Robot()
        self.srv = self.create_service(Drive, 'drive', self.driveCallback)
        self.get_logger().info('Rover Service initialized')
        self.get_logger().info('Drive service available at: %s' % self.srv.srv_name)
        # make new service for the rover
        # self.drill_srv = self.create_service(Drill, 'drill', self.drillCallback)
    
    def driveCallback(self, request, response):
        self.get_logger().info("Received Drive message left: " + str(request.left_speed) + " right: " + str(request.right_speed) + " duration: " + str(request.duration))
        self.robot.drive(request.left_speed, request.right_speed, request.duration)
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
    
    