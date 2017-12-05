#include <stdio.h>

int A[10] = {16,4,10,14,7,9,3,2,8,1};

void MaxHeapify(int* A, int n, int i) {
  int l = 2*i;
  int r = 2*i + 1;
  int largest;
  if (l <= n && A[l-1] > A[i-1]) {
    largest = l;
  } else {
    largest = i;
  }
  if (r <= n && A[r-1] > A[largest-1]) {
    largest = r;
  }
  if (largest != i) {
    int temp = A[i-1];
    A[i-1] = A[largest-1];
    A[largest-1] = temp;
    MaxHeapify(A, n, largest);
  }
}

void printArray(int* C, int n) {
  printf("[");
  for (int i = 0; i < n-1; i++) {
    printf("%d, ", C[i]);
  }
  printf("%d]\n", C[n-1]);
}

int main(int argsc, char** argsv) {
  MaxHeapify(A, 10, 2);
  printArray(A, 10);
  return 0;
}
