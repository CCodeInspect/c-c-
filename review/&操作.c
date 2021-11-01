//
// Created by pauline lee on 2021/10/26.
//

#include "&操作.h"
#include<stdio.h>

int main(void) {
    int pooh = 123; //定义整数变量并赋值
    int *pi, q; //定义整数型指针变量 *pi
    pi = &pooh; //取pooh的地址给pi
    q = *pi; //对pi进行间接运算/解引，赋值给变量p
    printf("%p\n", pi);
    printf("解引后 %d", q);


};