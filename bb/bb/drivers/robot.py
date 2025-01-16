import DCDriver as DC
import ServoDriver as Servo
import StepperDriver as Stepper
import time
class Robot():
    def __init__(self):
        # Drive motors
        self.board8 = DC.DCDriver(0x68)
        self.board5 = DC.DCDriver(0x65)
        self.b_right = self.board8.motor3
        self.b_right.reverse()
        self.m_right = self.board5.motor3
        self.f_right = self.board5.motor4
        self.b_left = self.board8.motor2
        self.m_left = self.board5.motor2
        self.f_left = self.board5.motor1

        # Turn servos
        self.steer_servo = Servo.ServoDriver(0x40)

        # Drill stepper
        # self.board6 = Stepper.StepperDriver(0x66)
        # self.drill = self.board6.stepper1

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

    def steer(self, angle):
        self.steer_servo.servo[0].angle = angle
    