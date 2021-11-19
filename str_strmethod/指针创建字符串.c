//
// Created by pauline lee on 2021/11/19.
//

#include "指针创建字符串.h"
#include <stdio.h>

int main(void) {
    const char *pt1 = "this is a str";
    printf("%c\n", pt1[0]);
    printf("%p\n", pt1[0]);
    printf("%p", pt1[1]);
};