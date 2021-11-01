//
// Created by pauline lee on 2021/10/27.
//

#include "exchange.h"
#include<stdio.h>

//函数原型
int exchange(int *u, int *v);

//主调函数
int main(void) {
    int x = 5, y = 4;
    int q;
    printf("交换前的x=%d ,y=%d\n", x, y);
    q = exchange(&x, &y);
    printf("交换后的x=%d ,y=%d\n", x, y);
    return 0;
};

//被调函数
int exchange(int *u, int *v) {
    int temp;
    temp = *u; // u=&x
    *u = *v;
    *v = temp;
    printf("自己的交换函数打印 x =%d, y= %d\n", *u, *v);
};