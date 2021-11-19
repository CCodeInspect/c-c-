//
// Created by pauline lee on 2021/11/4.
//

#include "param_3.h"
#include<stdio.h>

void param_3(char ch, int row, int col);

int main(void) {
    param_3('qq', 2, 3);
    return 0;
};

void param_3(char ch, int row, int col) {
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            putchar(ch);
        };//次数
        putchar('\n'); //putchar() 必须用单引号，不能用双引号
    }; //行数
};