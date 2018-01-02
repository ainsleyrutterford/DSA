import MaxHeapify

A = [1,2,3,4,5,6,7,8,9]

def BuildMaxHeap(A):
    n = len(A)
    for i in range(n/2, 0, -1):
        MaxHeapify.MaxHeapify(A,i)

BuildMaxHeap(A)
print (A)
