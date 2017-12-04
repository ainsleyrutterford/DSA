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

int main (int argsc, char** argsv) {
  int* B = InsertionSort(A,9);
  for (int i = 0; i < 9; i++) {
    printf("%d\n", B[i]);
  }
  return 0;
}
