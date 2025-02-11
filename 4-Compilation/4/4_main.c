#include <stdio.h>
#include <math.h>

void fourthPower(long arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = (long)pow(arr[i], 4);
    }
}

int main() {
    long arr[3] = {2, 6, 10};

    fourthPower(arr, 3);

    for (int i = 0; i < 3; i++) {
        printf("%ld\n", arr[i]);
    }

    return 0;
}