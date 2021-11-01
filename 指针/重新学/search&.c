//
// Created by pauline lee on 2021/10/25.
//

#include "search&.h"
#include <stdio.h>

//函数原型
void mikado(int bah);

//主调函数
int main(void) {
    int bah = 1;
    int pooh = 223;
    mikado(bah);
    return 0;
};

//被调函数
void mikado(int bah) {
    int pooh;
    printf("pooh的地址 = %p\n", &pooh);
    printf("bah的地址 = %p\n", &bah);
};
