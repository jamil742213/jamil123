import pyautogui
import time
time.sleep(4)

count = 0
while count<=5:
    pyautogui.typewrite("I love You ", str(count))
    pyautogui.press("enter")
    count = count+1