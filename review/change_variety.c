//
// Created by pauline lee on 2021/11/1.
//

#include "change_variety.h"
#include<stdio.h>

//函数原型
int change_v(int *a, int *b);

//主调函数
int main(void) {
    //调用change_v
    int a = 1;
    int b = 2;
    change_v(&a, &b);
    printf("a=%d,b=%d\n", a, b);
    change_v(&a, &b);
    printf("a=%d,b=%d", a, b);
    return 0;
};

//被调函数
int change_v(int *a, int *b) {
    int temp;
    temp = *a; //a 的值是存变量a的地址，但这里是要吧变量a的值，也就是这个地址解引，得到地址里存的值
    *a = *b;
    *b = temp;


};