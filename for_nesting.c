//
// Created by pauline lee on 2021/10/17.
//

#include "for_nesting.h"
#include <stdio.h>

/*
 * $
 * $$
 * $$$
 * $$$$
 * $$$$$
 * $$$$$$*/
int i = 1; //第一个循环的计数器
int i_f = 0; //第二个循环的计数器

int main(void) {
    for (; i < 6; i++) { //循环6次
        for (i_f = 0; i_f < i; i_f++) { //每个循环打印一次
            printf("$");

        };
//        i_f = 0;
        printf("\n");
    };
    return 0;
};