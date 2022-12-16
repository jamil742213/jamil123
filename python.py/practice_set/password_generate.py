from cgitb import strong
import string
import random


if __name__ =="__main__":
    s1 = string.ascii_lowercase
    # print(s1)
    s2 = string.ascii_uppercase
    # print(s2)
    d1 = string.digits
    # print(d1)
    s3 = string.punctuation
    # print(s3)
    plen = int(input("Enter password length \n "))
    s = []
    s.extend(list(s1))
    s.extend(list(s2))
    s.extend(list(d1))
    s.extend(list(s3))
    # print(s)
    random.shuffle(s)
    # print(s)
    print("".join(s[0:plen]))
    print(random.sample(s, plen))
    print("".join(random.sample(s, plen)))
