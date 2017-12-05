A = [4,3,2,1]

def MergeSort(A, first, last):
    if first < last:
        middle = (first + last) / 2
        MergeSort(A, first, middle)
        MergeSort(A, middle + 1, last)
        Merge(A, first, middle, last)

def Merge(A, first, middle, last):
    n1 = middle - first + 1
    n2 = last - middle
    L = [None] * (n1)
    R = [None] * (n2)
    for i in range(n1):
        L[i] = A[first + i]
    for j in range(n2):
        R[j] = A[middle + 1 + j]
    l = 0
    r = 0
    k = first
    while l < n1 and r < n2:
        if L[l] <= R[r]:
            A[k] = L[l]
            l = l + 1
        else:
            A[k] = R[r]
            r = r + 1
        k = k + 1
    while l < n1:
        A[k] = L[l]
        l = l + 1
        k = k + 1
    while r < n2:
        A[k] = R[r]
        r = r + 1
        k = k + 1

MergeSort(A, 0, 3)

print(A)
