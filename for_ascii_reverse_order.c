//
// Created by pauline lee on 2021/10/17.
//

#include "for_ascii_reverse_order.h"
#include <stdio.h>

/*
 * F
 * FE
 * FEC
 * FECB
 * FECBA*/
int i_e;//外层循环计数器
int i_i;//内层循环计数器
char c;

int main(void) {
    for (i_e = 0; i_e < 6; i_e++) {
        for (i_i = 0, c = 'F'; i_i < i_e + 1; i_i++, c--) { //c-- 代表 ascii 递减
            printf("%c", c);
        };//倒叙打印
        printf("\n");
    };//循环5次
    return 0;
};