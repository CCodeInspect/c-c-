//
// Created by pauline lee on 2021/10/18.
//

#include "echo.h"
#include<stdio.h>

int main(void) {
    char ch;
    while ((ch = getchar() != '#'))
        putchar(ch);
    return 0;
};