//
// Created by pauline lee on 2021/10/13.
//

#include "toobig.h"
#include <stdio.h>

int main(void) {
    int i = 2147483647;
    unsigned int j = 4294967295;
    printf("%d %d %d ", i, i + 1, i + 2); // int 类型超过最大值时，从 2147483647 开始
    printf("%u %u %u ", j, j + 1, j + 2); //%u -> unsigned int类型，超过最大值时从0开始

    return 0;
};