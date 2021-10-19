//
// Created by pauline lee on 2021/10/18.
//

#include "7_0.h"
#include<stdio.h>

int main(void) {
    int num;
    for (num = 1; num <= 11; num++) {
        if (num % 3 == 0)
            putchar('$');
        else
            putchar('*');
        putchar('#');
        putchar('%');
    };
    putchar('\n');
    return 0;
};