//
// Created by pauline lee on 2021/10/20.
//

#include "chline.h"
#include <stdio.h>

/*chline(ch,j,i),打印指定j行，i列,驱动测试*/

//函数原型
void chline(char ch, int row, int col);

//主调函数
int main(void) {
    printf("准备运行被调函数\n");
    chline('n', 3, 8);
    return 0;
};

//被调函数
void chline(char ch, int row, int col) {
    for (int i = 1; i <= row; i++) { //行
        for (int j = 1; j <= col; j++) { //列
            putchar(ch);
        };
    };
};