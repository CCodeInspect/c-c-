//
// Created by pauline lee on 2021/11/19.
//

#include "address.h"
#include <stdio.h>

#define MSG "i am lan"

int main(void) {
    char ch[] = MSG;
    char *pc = MSG;

    printf("%s\n", ch);
    printf("%c\n", ch[0]);
    printf("+++++++++++++++\n");
    printf("%p\n", *pc); //存指针的地址
    printf("%p\n", pc); //指针指向的地址
    printf("hi this" "is");
    return 0;


};