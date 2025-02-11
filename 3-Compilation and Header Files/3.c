#include <stdio.h>

#define ARR_SIZE 10

#define SWAP(A, B, TYPE)                                                       \
  {                                                                            \
    TYPE temp = A;                                                             \
    A = B;                                                                     \
    B = temp;                                                                  \
  }

void bubbleSort(int arr[]) {
  for (int i = 0; i < ARR_SIZE - 1; i++) {
    for (int j = 0; j < ARR_SIZE - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        SWAP(arr[j], arr[j + 1], int);
      }
    }
  }
}

void directSelectionSort(int arr[]) {
  for (int i = 0; i < ARR_SIZE - 1; i++) {
    int min = i;

    for (int j = i + 1; j < ARR_SIZE; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }

    SWAP(arr[i], arr[min], int);
  }
}

void directInsertionSort(int arr[]) {
  for (int i = 1; i < ARR_SIZE; ++i) {
    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}

void reverseArray(int arr[]) {
  for (int i = 0; i < ARR_SIZE / 2; i++) {
    SWAP(arr[i], arr[ARR_SIZE - i - 1], int);
  }
}

int main() {
  int arr[ARR_SIZE] = {8, 1, 2, 7, 3, 6, 11, 4, 5, 10};

  #ifdef _WIN32
      printf("With bubble sort (This program is being ran on Windows):\n");
      bubbleSort(arr);
  #elif __linux__
      printf("With selection sort (This program is being ran on Linux):\n");
      directSelectionSort(arr);
  #elif __APPLE__
      printf("With insertion sort (This program is being ran on MacOS):\n");
      directInsertionSort(arr, ARR_SIZE);
  #else
      printf("OS not recognized, reversing the array:\n");
      reverseArray(arr);
  #endif

  for (int i = 0; i < ARR_SIZE; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}