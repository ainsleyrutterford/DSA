A = [[1,2,3],[4,5,6],[7,8,9]]
B = [1,2,3]
n = 3

def MatrixVectorMult(A, B, n):
    C = [None] * n
    for i in range(n):
        C[i] = 0
        for j in range(n):
            C[i] = C[i] + A[i][j] * B[j]
    return C

print MatrixVectorMult(A, B, n)
