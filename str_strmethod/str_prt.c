//
// Created by pauline lee on 2021/11/19.
//

#include "str_prt.h"
#include <stdio.h>

int main(void) {
    printf("%s %p %c\n", "we", "are", *"family");
    return 0;
    /*
     * %s 转换打印
     * %p 地址
     * %c 字符*/
};