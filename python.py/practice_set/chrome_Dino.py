
import pyautogui
import time
from PIL import Image, ImageGrab
# from numpy import asarray

def hit(key):
    pyautogui.keyDown(key)


def isCollide(data):
    # Draw the rectangle for birds
    for i in range(300, 415):
        for j in range(410, 563):
            if data[i, j] < 100:
                hit("down")
                return

    for i in range(300, 415):
        for j in range(563, 650):
            if data[i, j] < 100:
                hit("up")
                return
    return
 

if __name__ == "__main__":
    time.sleep(1)
    while True:
        image = ImageGrab.grab().convert('L')
        data = image.load()
        isCollide(data)
        # print(asarray(image))

        # for i in range(334, 415):
        #     for j in range(500, 567):
        #         data[i, j] = 0


        # image.show()
