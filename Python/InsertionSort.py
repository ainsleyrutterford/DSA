A = [6,2,4,8,1,9,3,5,7]

def InsertionSort(A):
    n = len(A)
    for j in range(n):
        key = A[j]
        i = j - 1
        while i >= 0 and A[i] > key:
            A[i+1] = A[i]
            i = i-1
        A[i+1] = key
    return A

print(InsertionSort(A))
