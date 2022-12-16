def transform(b):
    for i in range(len(b)-1):
        if b[i] == '1':
            b[i] = '0'
            if b[i+1] == '0':
                b[i+1] ='1'
            else:
                b[i+1] = '1'
    return b



if __name__ == "__main__":
    a = list("0111111000111101111")
    print("Orignal list ",a)
    while a != transform(a.copy()):
        a = transform(a.copy())
        
    print(a)