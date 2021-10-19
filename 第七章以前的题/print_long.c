//
// Created by pauline lee on 2021/10/13.
//

#include "print_long.h"
#include <stdio.h>

int main(void) {
    long i;
    i = 65537;
    long long big;
    big = 12345678908642;
    short end;
    end = 200;
    unsigned int un;
    un = 3000000000;
    printf("%ld :  %hd: \n", i, i);
    printf("%lld : %ld: \n", big, big);
    printf("%hd:  and %d:  \n", end, end);
    printf("%u:  %d: \n", un, un); //%d会生成负值
};