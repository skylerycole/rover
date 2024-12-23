import time
from board import SCL, SDA
import busio
from adafruit_motor import stepper
from adafruit_pca9685 import PCA9685

class Stepper():
    def __init__(self, stepper):
        self.stepper = stepper

    def step(self):
        self.stepper.onestep()

    def stepFor(self, steps, duration):
        self.stepper.onestep(steps=steps)
        time.sleep(duration)
        self.stepper.release()

    def release(self):
        self.stepper.release()

i2c = busio.I2C(SCL, SDA)

class StepperDriver():
    def __init__(self, addr):
        self.pca = PCA9685(i2c, address=addr)
        self.pca.frequency = 1600
        self.pca.channels[7].duty_cycle = 0xFFFF
        self.pca.channels[2].duty_cycle = 0xFFFF
        self.pca.channels[13].duty_cycle = 0xFFFF
        self.pca.channels[8].duty_cycle = 0xFFFF
        self.stepper1 = Stepper(stepper.StepperMotor(
            self.pca.channels[4],
            self.pca.channels[3],
            self.pca.channels[5],
            self.pca.channels[6]
        ))
        self.stepper2 = Stepper(stepper.StepperMotor(
            self.pca.channels[10],
            self.pca.channels[9],
            self.pca.channels[11],
            self.pca.channels[12]
        ))

