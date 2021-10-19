//
// Created by pauline lee on 2021/10/18.
//

#include "cypher1.h"
#include<stdio.h>

#define BLANKC " "

int main(void) {
    char ch;
    ch = getchar(); //scanf
    while (ch != '\n') {
        if (ch == BLANKC)
            putchar(ch); //print
        else
            putchar(ch + 1);
        ch = getchar();
    }
    putchar(ch);
    return 0;

};