//
// Created by pauline lee on 2021/11/4.
//

#include "两数的调和平均数.h"
#include<stdio.h>

double average(double a, double b);

int main(void) {
    average(1.1, 2.1);
    return 0;
};

double average(double a, double b) {
    return 1 / ((1 / a + 1 / b) / 2);
};