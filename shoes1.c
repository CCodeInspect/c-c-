//
// Created by pauline lee on 2021/10/17.
//

#include "shoes1.h"
#include<stdio.h>

#define ADJUST 7.31

int main(void) {
    const double SCALE = 0.333;
    double shoe, foot;
    shoe = 3.0;
    while (shoe < 18.5) {
        foot = SCALE * shoe + ADJUST;
        printf("%f || shoe size (men's) foot length\n", shoe);
        shoe = shoe + 1.0;
    };
    printf("%f if the shoe fits,wear it %f.\n", shoe, foot);
    return 0;

};