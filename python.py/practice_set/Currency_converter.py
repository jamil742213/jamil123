

with open("currency_file.txt", "r") as f:
    lines = f.readlines()

currencyDict = {}
for line in lines:
    parse = line.split()
    currencyDict[parse[0]] = parse[1]
 


print(currencyDict)
amount = int(input("Enter amoubnt : \n"))
print("Enter the name of currency you want to convert this amount to?Available options :\n")
[print(item) for item in currencyDict.keys()]
currency = input("plese Enter one of this  values")
print(f"{amount } INR is equal to {amount * float(currencyDict[currency])} {currency}")