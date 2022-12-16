

from Djitellopy import tello
from time import sleep


me = tello.Tello()
me.connect()
print(me.get_battry())

me.takeoff()
me.send_rc_control(0, 50, 0)
sleep(2)
me.send_rc_control(0, 0, 30)
sleep(2)
me.send_rc_control(80, 0, 0)
me.land()

























