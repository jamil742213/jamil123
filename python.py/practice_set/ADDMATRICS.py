
def matrix(m, n):
    o = []
    for i in range(m):
        row = []
        for j in range(n):
            inp = int(input(f"Enter o[{i}] [{j}]"))
            row.append(inp)
        o.append(row)
    return o

def sumM(A, B):
    output = []
    for i in range(len(A)):
        row =[]
        for j in range(len(A[0])):
            row.append(A[i][j] + B[i][j])
        output.append(row)
        print('\n')
    return output
            
m = int(int(input("Enter the first value")))
n = int(int(input("Enter the second value")))

print("Enter matrix A")
A = matrix(m, n)

print(A)
print("\n")

print("Enter matrix B")
B = matrix(m, n)

print("\n")
print(B)

s = sumM(A,B)
print("\n")

print(s)