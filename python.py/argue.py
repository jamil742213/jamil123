# def func(variable, *args, **kwargs): #syntax
# def jam(a, b, c, d):
#     print(a,b,c,d)


# jam()
# jam=["jamil", "raihana", "kamil", "raiha"]

def jamil(lll, *args, **kwargs):
    print(lll)
    for item in args:
        print(args)
    for key,value in kwargs.items():
        print(key, value)
        # print(type(args))

jam=["jamil", "raihana", "kamil", "raiha"]
d = {"jamil":"raiha", "kamil":"kaiya", "jam":"tam"}
lll=["jamil_aktar_raihana"]
jamil(*jam, **d)

# jamil(jam)