//
// Created by pauline lee on 2021/10/13.
//
#include <stdio.h>
#include "basic.h"

int main(void) {
    int num;
    num = 100;
    printf("10进制表示如下： %d\n", num);
    printf("16进制表示如下： %x\n", num);
    printf("16进制表示如下： %#x\n", num); //前缀
    printf("8进制表示如下： %o\n", num);
    printf("8进制表示如下： %#o\n", num); //前缀

    return 0;
};