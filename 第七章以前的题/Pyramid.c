//
// Created by pauline lee on 2021/10/17.
//

#include "Pyramid.h"
#include<stdio.h>

/*int a;//外层计数器
int b;//内第2层计数器
int c;//内第3层计数器
int d; //内第四层计数器
char ch; //定义c字符
char anoth; //定义第三层的字符
char third; //定义第四层字符

int main(void) {
    for (a = 0; a < 6; a++) { //外层循环5次
        for (b = 0, ch = 'A'; b < a + 1; b++, ch++) { //以A开始，逐渐++
            for (c = 0; c < b + 1; c++, anoth++) {
                for (d = 0, third = 'B'; d < c + 1; d++, third--) {
                    printf("%c", third);
                };
                printf("\n");
            };
        };//内层
    };//外层循环5次
};*/

int a, b;
char ch;

int main(void) {
    for (ch = 'A', a = 0; a < 6; a++) {
        for (b = 0; b < a + 1; b++, ch++) {
            printf("%c", ch);
        };
        for (ch--; b > 1; b--) {
            ch--;
            printf("%c", ch);
        };
        printf("\n");
    };
    return 0;
};