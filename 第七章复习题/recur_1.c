//
// Created by pauline lee on 2021/10/19.
//

#include "recur_1.h"
#include<stdio.h>

/*函数原型*/
void up_and_down(int n);

/*主调函数*/
int main(void) {
    up_and_down(1);
    return 0;
};

/*被调函数*/

void up_and_down(int n) {
    printf("当前变量%d: 的内存位置%p\n", n, &n);
    if (n < 4)
        up_and_down(n + 1);
    printf("当前变量%d : 的内存地址为 %p\n", n, &n);
};