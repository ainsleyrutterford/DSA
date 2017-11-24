#include <stdio.h>
#include "terminalIO.c"

// Takes in an array a, and the size of the array.
int* isort (int* a, int size) {
  int i, key;
  for (int j = 1; j < size; j++) {
    key = a[j];
    i = j-1;
    while ((i >= 0) && (a[i] > key)) {
      a[i+1] = a[i];
      i = i-1;
    }
    a[i+1] = key;
  }
  return a;
}

int main (int argsc, char** argsv) {
  int a[9] = {9,8,7,6,5,4,3,2,1};
  int* b = isort(a,9);
  for (int i = 0; i < 9; i++) {
    printf("%d\n", b[i]);
  }
  return 0;
}
