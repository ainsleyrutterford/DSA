#include <stdio.h>

int A[9] = {6,2,4,8,1,9,3,5,7};

int* InsertionSort (int* A, int n) {
  int i, key;
  for (int j = 1; j < n; j++) {
    key = A[j];
    i = j-1;
    while ((i >= 0) && (A[i] > key)) {
      A[i+1] = A[i];
      i = i-1;
    }
    A[i+1] = key;
  }
  return A;
}

void printArray(int* C, int n) {
  printf("[");
  for (int i = 0; i < n-1; i++) {
    printf("%d, ", C[i]);
  }
  printf("%d]\n", C[n-1]);
}

int main (int argsc, char** argsv) {
  printArray(InsertionSort(A,9), 9);
  return 0;
}
