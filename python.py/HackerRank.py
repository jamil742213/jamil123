def is_leap(year):
    leap = False
    
    # Write your logic here
    if 1900<= year<=10**5:
        if (year % 4 == 0 and year % 100 !=0) or(year %100 == 0 and year %400 == 0):
            return True
        else:
            return False
        
    return False

year = int(input())
print(is_leap(year))