import DCDriver as DC
import StepperDriver as Stepper
import time
class Robot():
    def __init__(self):
        # Drive motors
        self.board2 = DC.DCDriver(0x62)
        self.board3 = DC.DCDriver(0x63)
        self.f_left = self.board2.motor2
        self.m_left = self.board2.motor1
        self.m_right = self.board2.motor3
        self.m_right.reverse()
        self.b_left = self.board3.motor2
        self.f_right = self.board3.motor1
        self.f_right.reverse()
        self.b_right = self.board3.motor3
        self.b_right.reverse()

        self.drillMotor = self.board2.motor4

        # Turn servos
        # self.steer_servo = Servo.ServoDriver(0x40)

        # Drill stepper
        # self.board6 = Stepper.StepperDriver(0x62)
        # self.lift = self.board6.stepper1
        # self.drill = self.board6.stepper2
        # self.board6 = DC.DCDriver(0x66)
        # self.trayStepper = self.board6.stepper1

    def drive(self, left, right, duration):
        self.b_right.spin(right)
        self.m_right.spin(right)
        self.f_right.spin(right)
        self.b_left.spin(left)
        self.m_left.spin(left)
        self.f_left.spin(left)
        time.sleep(duration)
        self.b_right.stop()
        self.m_right.stop()
        self.f_right.stop()
        self.b_left.stop()
        self.m_left.stop()
        self.f_left.stop()

    def drill(self, speed, duration):
        self.drillMotor.spin(speed)
        time.sleep(duration)
        self.drillMotor.spin(0)

    # def steer(self, angle):
    #     for i in range(0, 8):
    #         self.steer_servo.servo[i].angle = angle
    #         time.sleep(1)

    # def steer(self, angle):
    #     for i in range(8):
    #         self.steer_servo.servo[i].angle = angle


   #  def drill(self, steps, delay):
   #     for i in range(0, steps):
   #         self.drill.onestep()
   #         time.sleep(delay)

    # def tray(self, speed, x, duration):
    #     for i in range(steps):
    #         self.trayStepper.onestep()
    #         time.sleep(delay)