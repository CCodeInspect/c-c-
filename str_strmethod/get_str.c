//
// Created by pauline lee on 2021/11/19.
//

#include "get_str.h"
#include <stdio.h>

int main(void) {
    char cat[10] = "solar";
//    printf("%c\n", cat);
//    printf("%p\n", &cat[1]); //取地址
//    printf("%p\n", cat); //cat 默认为0的地址
    printf("%c\n", *cat); //首字母
    printf("%p\n", cat); //取首字母的地址
    printf("%c\n", *(cat + 1)); //取下标为1的字母
    printf("%p\n", *(cat + 1)); //取下标为1的字母的地址
};