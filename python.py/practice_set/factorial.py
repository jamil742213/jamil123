from cgi import print_arguments
from itertools import count
from math import factorial

print(factorial(5))
def factrorial(number):
    if number == 0 or number == 1:
        return 1
    else:
        return number * factorial(number - 1)
def factorialTroailingZeros(number):
    pass
    # fac = factorial(number)
    # print(fac)
    count = 0
    # while fac %10 == 0:
    #     count = count + 1
    #     fac = fac / 10

    # return count
    i =5
    while number/i !=0:
        count += int(number/i)
        i = i*5
    return count


    
if __name__ == "__main__":
    number = int (input("Enter a number : "))
    # fac = factorial(number)
    # print (f"The factorial is : { fac}")
    fact = factorialTroailingZeros(number)
    print(f"The factorial is : {fact}")