#include <stdio.h>

#define ARR_SIZE 5

#define SWAP(A, B, TYPE)                                                       \
  {                                                                            \
    TYPE temp = A;                                                             \
    A = B;                                                                     \
    B = temp;                                                                  \
  }

#define SORT(ARRAY, SIZE, TYPE, COMPARE)                                       \
  {                                                                            \
    for (int i = 0; i < SIZE - 1; i++) {                                       \
      for (int j = 0; j < SIZE - i - 1; j++) {                                 \
        if (ARRAY[j] COMPARE ARRAY[j + 1]) {                                   \
          SWAP(ARRAY[j], ARRAY[j + 1], TYPE);                                  \
        }                                                                      \
      }                                                                        \
    }                                                                          \
  }

int main(void) {
  int arr[ARR_SIZE] = {4, 2, 1, 5, 3};


  SORT(arr, ARR_SIZE, int, >);


  printf("Ascending: ");
  for (int i = 0; i < ARR_SIZE; i++) {
    printf("%d ", arr[i]);

    if (i == ARR_SIZE - 1) {
      printf("\n");
    }
  }


  SORT(arr, ARR_SIZE, int, <);


  printf("Descending: ");
  for (int i = 0; i < ARR_SIZE; i++) {
    printf("%d ", arr[i]);
  }
}