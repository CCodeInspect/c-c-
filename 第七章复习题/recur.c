//
// Created by pauline lee on 2021/10/19.
//

#include "recur.h"
#include<stdio.h>

int get_big(int n, int m); //函数原型

int main(void) {
    printf("调用被调用函数！\n");
    get_big(1, 2);
    printf("over");


};

int get_big(int m, int n) {
    for (m = 0, n = 4; m < n; m++) {
        printf("biger = %d\n", m);
    };
    printf("\n");

};