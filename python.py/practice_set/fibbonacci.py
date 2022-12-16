

import time

def fiboIter(n):
    previousnum = 0
    currentnum = 1
    for i in range(1, n):
        preprenum = previousnum
        previousnum = currentnum
        currentnum = previousnum + preprenum
    return currentnum




def fiboRecur(n):
    
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fiboRecur(n-1) + fiboRecur(n - 2)


if __name__ == "__main__":
    num = int(input("Enter a number"))
    init = time.time()
    print(f"using fib recursiv value of fib ({num}) is {fiboRecur(num)} ")
    print(f"It took {time.time()- init} Second ")
    print(f"using fib Itrative value of fib ({num}) is {fiboIter(num)} ")
    print(f"It took {time.time()- init} Second ")