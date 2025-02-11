#include <stdio.h>

void bubblesort(int * arr, int arrlen);
int sortedevenindexesproduct(int *arr, int arrlen);

int main(void) {
  int array[5] = {1,9,3,2,5};
  int product = sortedevenindexesproduct(array, 5);
  printf("%d", product);
  return 0;
}

void bubblesort(int *arr, int arrlen) {
  int sorted = 0;
  for (int i = 0; i < arrlen - 1 && !sorted; i++) {
    sorted = 1;
    for (int j = 0; j < arrlen - i - 1; j++) {
      //if условието отдолу трябва да използва j за индексите, а не i.
      if (arr[j] < arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        sorted = 0;
      }
    }
  }
}

int sortedevenindexesproduct(int *arr, int arrlen) {
  bubblesort(arr, arrlen);
  //Тук product е 1, защото ако е 0 както в оригиналния код, ще се връща като 0 винаги защото 0 умножено по каквото и да е пак е 0.
  int product = 1;
  //Във for цикъла i се инициализира със стойност 0, а не с 1, защото искаме да проверим всички елементи в масива.
  for (int i = 0; i < arrlen; i+=2) {
    product *= arr[i];
  }
  return product;
}