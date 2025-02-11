#include <stdio.h>

#define SIZE 16

#define DEBUG 1

#define SWAP(A, B, TYPE)                                                       \
  {                                                                            \
    TYPE temp = A;                                                             \
    A = B;                                                                     \
    B = temp;                                                                  \
  }

void printArr(int *arr, int size) {
    #ifdef DEBUG
        printf("\n\nThe macro DEBUG is defined!");
        printf("\nThe sorted array is: ");
        for (int i = 0; i < size; i++) {
            if (i != size - 1) {
                printf("%d, ", arr[i]);
            } else {
                printf("%d", arr[i]);
            }
        }
        printf("\nThe numbers on each index divisible by three are: ");
        for (int i = 0; i < size; i++) {
            if (i % 3 == 0 && i != size - 1) {
                printf("%d, ", arr[i]);
            } else if (i == size - 1) {
                printf("%d ", arr[i]);
            }
        }
    #endif
    printf("\n");
}

void bubbleSort(int *arr, int arrSize) {
    for (int i = 0; i < arrSize - 1; i++) {
      for (int j = 0; j < arrSize - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
          SWAP(arr[j], arr[j + 1], int);
        }                                                                      
      }                                                                        
    }
}

void sumOfIndexes(int *arr, int arrSize) {
    int sum = 0;
    for (int i = 0; i < arrSize; i++) {
        if (i % 3 == 0) {
            sum += arr[i];
        }
    }
    printf("The sum of the numbers on every index divisible by 3 is: %d \n", sum);
    printArr(arr, arrSize);
}

int main(void) {
    int arr[SIZE] = {3, 54, 21, 8, 1, 76, 14, 32, 59, 19, 7, 91, 83, 27, 61, 2};

    bubbleSort(arr, SIZE);  
    sumOfIndexes(arr, SIZE);
}