//
// Created by pauline lee on 2021/10/16.
//

#include "double_right.h"
#include<stdio.h>

int main(void) {
    double mint[4];
    char ch_s[3];
    scanf("%d", ch_s);  //字符串数组不用&，因为内存中存的第一位是字符串数组变量名称，而不是数组的下标为0的第一位
//    scanf("%lf", mint[2]);  //错误写法，非字符串数组第一位存的就是字符的下标为0的字符，所以需要&
//    printf("mint[2]: ", mint[2]); //不要这样打印
//    scanf("%lf", &mint[2]); //正确写法，不要数组越界即可，并且是非字符的数组，所以需要&
//    scanf("%lf", &mint); //写法不好，不明确意义

};