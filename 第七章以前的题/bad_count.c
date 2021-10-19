//
// Created by pauline lee on 2021/10/15.
//

#include "bad_count.h"
#include <stdio.h>

int main(void) {
    int i_0 = 1;
    int i_1 = 2;
    float f_0 = 1.1f;
    float f_1 = 2.2f;
    printf("%d %d \n", i_0); //参数超出
    printf("%d\n", i_0, i_1); //参数不够
    printf("%d\n", f_0);// %d打印浮点数
    printf("%f\n", f_0);
    return 0;
};