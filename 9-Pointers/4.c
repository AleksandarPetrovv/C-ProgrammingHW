#include <stdio.h>

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

int main(void) {
  int x = 5, y = 10;
  printf("x < y ascending has a return value of %d.\n", compareAsc(&x, &y));
  printf("x < y descending has a return value of %d.\n", compareDesc(&x, &y));
  printf("y > x ascending has a return value of %d.\n", compareAsc(&y, &x));
  printf("y > x descending has a return value of %d.\n", compareDesc(&y, &x));
  printf("x = x ascending has a return value of %d.\n", compareAsc(&x, &x));
  printf("x = x descending has a return value of %d.\n", compareDesc(&x, &x));
}