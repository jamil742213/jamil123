
from pygame import mixer
from datetime import datetime
from time import time

def musiconloop(file, stoper):
    mixer.init()
    mixer.init.load(file)
    mixer.music.play()
    while True:
        a = input()
        if a == stoper:
            mixer.music.stop()
            break


def log_now(msg):
    with open("mylogs.txt", "a") as f:
        f.write(f"{msg} {datetime.now()} \n")


if __name__ == "__main__":
    # musiconloop("25.mp3", "stop")
    init_water = time()
    init_eyes = time()
    init_exercise = time()
    waterexe = 5
    exscs = 10
    eyes = 20

    while True:
        if time() - init_water > waterexe:
            print("Water Drinking time . Enter 'drank '  to stop the alarm")
            musiconloop('25.mp3', 'drank')
            init_water = time()
            log_now("Drank Water at ")

        if time() - init_eyes > eyes:
            print("Eye execrise  time . Enter 'Done Eyes '  to stop the alarm")
            musiconloop('25.mp3', 'doneeyes')
            init_eyes = time()
            log_now(f"Eye  Relaxed at {init_eyes} ")

        if time() - init_exercise > exscs:
            print("Physical Activity  time . Enter 'Donephysical '  to stop the alarm")
            musiconloop('Meherban.mp3', 'Donephysical')
            init_exercise = time()
            log_now(f"Physical Activity Done at {init_exercise}")