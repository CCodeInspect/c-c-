//
// Created by pauline lee on 2021/10/19.
//

#include "pp.h"
#include<stdio.h>

int *pi;

int main(void) {
    int i = 1;
    int aq;
    pi = &i;
    aq = *pi;
    printf("解引用 %d", aq);

};