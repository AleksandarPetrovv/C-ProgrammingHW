#include <stdio.h>

void swap(void * a, void * b) {
    int temp = *(int *)a;
    *(int *)a = *(int *)b;
    *(int *)b = temp;
}

int compareAsc(const void *a, const void *b) {
  if (*(int *)a > *(int *)b) {
    return 1;
  } else if (*(int *)a < *(int *)b) {
    return -1;
  } else if (*(int *)a == *(int *)b) {
    return 0;
  }
  return -2;
}

int compareDesc(const void *a, const void *b) {
  if (*(int *)a > *(int *)b) {
    return -1;
  } else if (*(int *)a < *(int *)b) {
    return 1;
  } else if (*(int *)a == *(int *)b) {
    return 0;
  }
  return -2;
}

void bubbleSort(int * arr, int arrSize, int (*compare)(const void *, const void *), void (*swapElements)(void *, void *)) {
    for (int i = 0; i < arrSize; i++) {
        for (int j = 0; j < arrSize - i - 1; j++) {
            if (compare(&arr[j], &arr[j + 1]) == 1) {
                swapElements(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void print(int *arr, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
}

int main(void) {
    int arr[] = {21, 24, 15, 9, 33};
    printf("Initial array: ");
    print(arr, 5);

    bubbleSort(arr, 5, compareAsc, swap);
    printf("\nArray sorted ascending: ");
    print(arr, 5);
    printf("\nArray sorted descending: ");
    bubbleSort(arr, 5, compareDesc, swap);
    print(arr, 5);
}