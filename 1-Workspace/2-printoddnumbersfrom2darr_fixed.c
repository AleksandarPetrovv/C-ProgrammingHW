#include <stdio.h>

int main() {

  int arr[2][3] = {{1, 7, 6}, {5, 2, 3}};

//Във for циклите от долу условията са обърнати, тоест трябва да е i < 2 и j < 3 за да се принтира матрицата. (преди беше i < 3 и j < 2) 
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      if (arr[i][j] % 2 == 1) {
        printf("%d ", arr[i][j]);
      }
    }
  }

  return 0;
}