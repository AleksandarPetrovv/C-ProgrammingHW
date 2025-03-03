#include <stdio.h>

#define SIZE 7

int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *arr, int size) {
    int *p;
    int *pp;

    for (p = arr; p < arr + size - 1; p++) {
        for (pp = arr; pp < arr + size - (p - arr) - 1; pp++) {
            if (*pp > *(pp + 1)) {
                swap(pp, pp + 1); 
            }
        }
    }
}

int main(void) {
    int arr[] = {5, 6, 2, 10, 4, 23, 18};

    bubbleSort(arr, SIZE);

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
}