from ctypes import addressof
from ctypes import c_int, addressof
import funcc

print(';hello world!')
a = eval(input("enter your number"))
print(a)
print(id(a))
print(hex(id(a)))
# print(addressof(a))
print(addressof(c_int(a)))
print(funcc.add(80, 98))
print(funcc.minus(80, 98))