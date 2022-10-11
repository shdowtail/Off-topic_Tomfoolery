#include <stdio.h>

int strToInt(char str[]) {
    int i = 0, sum = 0;
    while (str[i] != '\0') //while an array value 'i' isn't equal to NULL
    {
        if (str[i] < 48 || str[i] > 57) // 48-57 0-9
        {
            printf("Unable to convert into integer");
        } else {
            sum = sum * 10 + (str[i] - 48);
            i++;
        }

    }
    return sum;
}
//
// Created by konket on 08/10/2022.
//
