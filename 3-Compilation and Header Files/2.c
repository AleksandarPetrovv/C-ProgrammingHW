#include <stdio.h>

#define ARRAY_SIZE 10

int main(void) {
    #ifdef ARRAY_SIZE
        #if (ARRAY_SIZE > 0) && (ARRAY_SIZE < 11)
            int arr[ARRAY_SIZE];
            int n = 1;
  
            for (int i = 0; i < ARRAY_SIZE; i++) {
                arr[i] = n;
                n = n * 2;
                printf("%d\n", arr[i]);
            }
  
        #else
            printf("Array size should be above 0 and below 11.\n");
        #endif
    #endif
}