#include <stdio.h>

void print_array(int array[], int n) {
  printf("[ ");
  for (int index = 0; index < n; index++) {
    printf("%i ", array[index]);
  }
  printf("]\n");
}

void swap(int *ptrA, int *ptrB) {
  int temp = *ptrA;
  *ptrA = *ptrB;
  *ptrB = temp;
}

void bubblesort(int array[], int n) {
  int i, j;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        swap(&array[j], &array[j + 1]);
      }
    }

    printf("Pass %i         : ", i + 1);
    print_array(array, n);
  }
}

int main() {
  int array[] = {90, 89, 78, 67, 56, 45, 34, 23, 12};
  int n = sizeof(array) / sizeof(array[0]);

  printf("Unsorted Array : ");
  print_array(array, n);
  printf("\n");

  bubblesort(array, n);

  printf("\nSorted Array   : ");
  print_array(array, n);

  return 0;
}
