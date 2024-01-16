#include <stdio.h>

int main() {
  int i, min, max;
  int array[8] = {3, 2, 6, 5, 4, 7, 8, 1};

  for (i = 0; i < 8; i++) {
    if (i == 0) {
      min = array[i];
      max = array[i];
    }
    if (array[i] > max) {
      max = array[i];
    }
    if (array[i] < min) {
      min = array[i];
    }
  }

  printf("minimum = %d \n", min);
  printf("maximum = %d \n", max);

  return 0;
}
