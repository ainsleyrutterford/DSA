#include <stdio.h>

int A[4] = {4,3,2,1};

void Merge(int* A, int first, int middle, int last) {
  int n1 = middle - first + 1;
  int n2 = last - middle;
  int L[n1], R[n2];
  for (int i = 0; i < n1; i++) {
    L[i] = A[first + i];
  }
  for (int j = 0; j < n2; j++) {
    R[j] = A[middle + 1 + j];
  }
  int l = 0;
  int r = 0;
  int k = first;
  while (l < n1 && r < n2) {
    if (L[l] <= R[r]) {
      A[k] = L[l];
      l = l + 1;
    } else {
      A[k] = R[r];
      r = r + 1;
    }
    k = k + 1;
  }
  while (l < n1) {
    A[k] = L[l];
    l = l + 1;
    k = k + 1;
  }
  while (r < n2) {
    A[k] = R[r];
    r = r + 1;
    k = k + 1;
  }
}

void MergeSort(int* A, int first, int last) {
  if (first < last) {
    int middle = (first + last) / 2;
    MergeSort(A, first, middle);
    MergeSort(A, middle + 1, last);
    Merge(A, first, middle, last);
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
  MergeSort(A, 0, 3);
  printArray(A, 4);
  return 0;
}
