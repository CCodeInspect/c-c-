//
// Created by pauline lee on 2021/10/16.
//

#include "varwide.h"
#include<stdio.h>

int main(void) {
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;
    printf("enter a filed width: \n");
    scanf("%d", &width);
    printf("the number is :%*d:\n", width, number);
    printf("enter a width and a precision:\n");
    scanf("%d %d", &width, &precision);
    printf("weight =%*.*f\n", width, precision, weight);
    printf("done!\n");
    return 0;

};