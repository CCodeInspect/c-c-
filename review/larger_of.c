//
// Created by pauline lee on 2021/11/4.
//

#include "larger_of.h"
#include <stdio.h>

void larger_of(double *a, double *b);

int main(void) {
    double a = 9991.1;
    double b = 2.1;
    printf("调用前 a= %.2f , b =%.2f\n", a, b);
    larger_of(&a, &b);
    printf("%.2f , %.2f", a, b);
};

void larger_of(double *a, double *b) {
    *b = *a >= *b ? *a : *b; //这里是判断指针的大小
    *a = *b;
};