import time
from board import SCL, SDA
import busio
from adafruit_motor import motor
from adafruit_pca9685 import PCA9685

class Motor():
    def __init__(self, motor):
        self.motor = motor
        self.dir = -1

    def reverse(self):
        self.dir *= -1
                
    def spin(self, speed):
        self.motor.throttle = speed * self.dir
        
    def stop(self):
        self.motor.throttle = 0
        
    def spinFor(self, speed, duration):
        self.spin(speed)
        time.sleep(duration)
        self.stop()

i2c = busio.I2C(SCL, SDA)

class DCDriver():
    def __init__(self, addr):
        self.pca = PCA9685(i2c, address=addr)
        self.pca.frequency = 100
        self.pca.channels[8].duty_cycle = 0xFFFF
        self.motor1 = Motor(motor.DCMotor(self.pca.channels[9], self.pca.channels[10]))
        self.pca.channels[13].duty_cycle = 0xFFFF
        self.motor2 = Motor(motor.DCMotor(self.pca.channels[11], self.pca.channels[12]))
        self.pca.channels[2].duty_cycle = 0xFFFF
        self.motor3 = Motor(motor.DCMotor(self.pca.channels[3], self.pca.channels[4]))
        self.pca.channels[7].duty_cycle = 0xFFFF
        self.motor4 = Motor(motor.DCMotor(self.pca.channels[5], self.pca.channels[6]))
