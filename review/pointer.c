//
// Created by pauline lee on 2021/10/27.
//

#include "pointer.h"
#include<stdio.h>

int pooh = 1;
int *pi;

int main(void) {
    pi = &pooh;
    int q;
    q = *pi;
    printf("pi= %p\n", pi);
    printf("pi的值为%d", q);

};
