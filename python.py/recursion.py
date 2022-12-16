import sys
print(sys.getrecursionlimit())
# sys.setrecursionlimit(2000)
i = 0

def ff():
    global i
    # while True:
    i += 1
    print(i, "assalamualikum")
    ff()

ff()