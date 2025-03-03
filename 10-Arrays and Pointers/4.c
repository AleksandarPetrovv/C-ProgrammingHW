#include <stdio.h>

#define COLUMNS 4

void print2D(int *arr, int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            printf("%d ", *(arr + i * COLUMNS + j));
        }
        printf("\n");
    }
}

int main(void) {
    int arr[3][COLUMNS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    print2D((int *)arr, 3);
}