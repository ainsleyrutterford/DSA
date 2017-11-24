#include <stdio.h>

int A[3] = {1,2,3};
int B[3] = {4,5,6};
int n = 3;

int ScalarProduct(int A[], int B[], int n) {
  int S = 0;
  for (int i = 0; i < n; i++) {
    S += A[i]*B[i];
  }
  return S;
}

int main(int argsc, char** argsv) {
  printf("%d\n", ScalarProduct(A, B, n));
}
