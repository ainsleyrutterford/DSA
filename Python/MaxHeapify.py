A = [16,4,10,14,7,9,3,2,8,1]

def MaxHeapify(A, i):
    l = 2*i
    r = 2*i + 1
    if l <= len(A) and A[l-1] > A[i-1]:
        largest = l
    else:
        largest = i
    if r <= len(A) and A[r-1] > A[largest-1]:
        largest = r
    if largest != i:
        temp = A[i-1]
        A[i-1] = A[largest-1]
        A[largest-1] = temp
        MaxHeapify(A, largest)

MaxHeapify(A, 2)

print (A)
