import numbers


a = int(input("Enter firts number"))
b = int(input("Enter second number"))

numbers == max(a, b)

while True:
    if numbers % a == 0 and numbers % b ==0:
        break
    numbers = numbers +1
    
print(f"The lcm  of {a} and {b} is {numbers}")