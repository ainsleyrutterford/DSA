A = [1,2,3]
B = [4,5,6]
n = 3

def ScalarProduct(A, B, n):
    S = 0
    for i in range(n):
        S = S + A[i]*B[i]
    return S

print ScalarProduct(A, B, n)
