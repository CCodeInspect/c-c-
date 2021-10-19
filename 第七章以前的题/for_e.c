//
// Created by pauline lee on 2021/10/16.
//

#include "for_e.h"
#include<stdio.h>

//char test[100] = ""; //假设是个char类型变量
/*打印 4*8 个 $*/
int main(void) {
    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 9; j++) {
            printf("$");
        };
        printf("\n");

    }; //test表示条件
    return 0;
};