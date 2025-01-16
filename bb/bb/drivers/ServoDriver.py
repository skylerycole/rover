import time
from adafruit_servokit import ServoKit

class ServoDriver():
    def __init__(self, addr):
        self.kit = ServoKit(channels=8)
        self.servo = self.kit.servo


