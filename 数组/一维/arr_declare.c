//
// Created by pauline lee on 2021/10/21.
//

#include "arr_declare.h"
#include<stdio.h>

#define MONTH 4
#define MONTH1 7


int main(void) {
    int days[MONTH] = {2, [3] = 1}; //[2]是给下标为2的位置赋值为1
//    int stuff[] = {1, [6]=23};
    int i;
    for (i = 0; i < MONTH1; i++) {
        printf("%2d %d\n", i, days[i]);
    };
};