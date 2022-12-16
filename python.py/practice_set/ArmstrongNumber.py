

num = int(input("Enter a Armstrong number :"))
sum = 0
order = len(str(num))
copy_Num = num
while num > 0:
    digit = num % 10
    sum += digit ** order
    num = num//10

if sum == copy_Num:
    print(f"{copy_Num} : This is an Armstrong Number  ")
else:

    print(f"{copy_Num} : This is not  an Armstrong Number :")