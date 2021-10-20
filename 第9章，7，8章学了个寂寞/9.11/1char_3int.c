//
// Created by pauline lee on 2021/10/20.
//

#include "1char_3int.h"
#include<stdio.h>

/*char a,int a次数,b行数;*/

//函数原型
void char_int(char ch, int row, int col);

//主调函数

int main(void) {
    printf("准备打印b行a次\n");
    char_int('q', 5, 2);
    return 0;
};

//被调函数
void char_int(char ch, int row, int col) {
    int i, j;
    for (i = 1; i <= row; i++) {
        for (j = 1; j <= col; j++) {
            putchar(ch);
        };
        putchar('\n');

    };
};
