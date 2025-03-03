#include <stdio.h>

int main(void) {
  printf("Input a number:\n");
  double num1;
  scanf("%lf", &num1);

  printf("Input another number:\n");
  double num2;
  scanf("%lf", &num2);

  double *p1 = &num1;
  double *p2 = &num2;

  printf("\nAddress of pointer 1: %p\nValue of number 1: %.1lf\n\n", &p1, *p1);
  printf("Address of pointer 2: %p\nValue of number 2: %.1lf\n\n", &p2, *p2);
}