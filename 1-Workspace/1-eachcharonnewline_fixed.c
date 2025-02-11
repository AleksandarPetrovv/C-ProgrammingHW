#include <stdio.h>

void printcharsonnewline(char *s);

int main() {
  char input[] = "someString";
  printcharsonnewline(input);

  return 0;
}

void printcharsonnewline(char *s) {
  //Преди поправката for cycle-ат отдолу имаше s[index] != '0', а правилното е да е докато s[index] != '\0' (тоест терминираща нула).
  for (char index = 0; s[index] != '\0'; index++) {
    char currentchar = s[index];
    printf("%c\n", currentchar);
  }
}