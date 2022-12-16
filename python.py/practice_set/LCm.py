from math import lcm
import math
from sqlalchemy import true


class LCM:
    def LCM1(self):
        a = int(input("Enter the first  number: "))
        b = int(input("Enter the second number: "))
        maxNum = max(a, b)
        while True:
            if maxNum % a == 0 and maxNum % b == 0:
                break
            maxNum = maxNum + 1
        print(f"The LCM of {a} and {b} is {maxNum}")

l =LCM()
# l.LCM1()
LCM.LCM1(l)
a = math.lcm(12,13)
b = math.gcd(12, 13)

print(f"The LCM is {a}")
print(f"THe GCD is {b}")