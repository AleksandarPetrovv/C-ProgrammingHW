#include "3_transformation.h"
#include <stdio.h>
#include <string.h>

transformation str_to_long(char str[]) {
    transformation rs;
    int i = 0;
    int valid = 1;
    int negative = 0;
    rs.error[0] = '\0';
    rs.result = 0;

    if (str[0] == '\0') {
        strcpy(rs.error, "Empty input string.");
        return rs;
    }

    if (str[0] == '-') {
        negative = 1;
        i++;
    }

    if (str[i] == '\0') {
        strcpy(rs.error, "Invalid input string.");
        rs.result = 0;
        return rs;
    }

    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9') {
            valid = 0;
            break;
        }
        rs.result = rs.result * 10 + (str[i] - '0');
        i++;
    }

    if (valid == 1) {
        if (negative == 1) {
            rs.result = -rs.result;
        }
    } else {
        rs.result = 0;
        strcpy(rs.error, "Invalid input string.");
    }

    return rs;
}
