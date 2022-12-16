from sympy import Range


A = [[1,5,3],
    [4,0,2],
    [6,0,3]]
B = [[1,0],
    [2,5],
    [4,9]]
C = [[0, 0],
    [0, 0],
    [0, 0]]

for i in range(1, len(C)+1):
    for j in range(1, len(C[0])):
        for K in range(0, len(B)):
            C[i][j] += A[i][K] * B[K]* [[i]]


for row in C:
    print(row)