//
// Created by pauline lee on 2021/10/16.
//

#include "for_complicated.h"
#include<stdio.h>

int main(void) {
    int k;
    for (k = 1, printf("%d hi!\n", k); printf("k=%d\n", k), k * k < 26; k += 2, printf("now k is %d\n", k)) {
        printf("k is %d in the loop\n", k);


    };
    return 0;
//    {};

};