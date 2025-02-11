#include <stdio.h>
#include <string.h>

//Тази дефиниция е просто предефинираното макро __FILE__, но се извежда от нея само съдържанието след последната наклонена черта от path-a, тоест само името на файла.
//(Взето от stackoveflow)

#define __FILENAME__ \
(strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

#define DEBUG(var) \
printf("The name of this variable is '%s' and its value is %d, the file its being used in is named '%s' and this is being printed from line %d.\n", #var, var, __FILENAME__, __LINE__)

int main(void) {
    int variable = 10;
    DEBUG(variable);
}