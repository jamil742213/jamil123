x = input("enter a number")
y = input("enter a number")

try:
    z = int(x) / int(y)
except Exception as e:
    print('exception occur :',e)
    z = None
print("Division is : ", z)