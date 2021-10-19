//
// Created by pauline lee on 2021/10/17.
//


#include "for_order.h"
#include<stdio.h>


/* A
 * BC
 * DEF
 * GHIJ
 * KLMNO*/
int i_e;
int i_i;
char c = 'A';

int main(void) {
    for (i_e = 0; i_e < 6; i_e++) {
        for (i_i = 0; i_i < i_e + 1; i_i++, c++) {
            printf("%c", c);
        };//内层打印ascii 大写字母A开头的字符
        printf("\n");
    };//外层循环5次
    return 0;
};