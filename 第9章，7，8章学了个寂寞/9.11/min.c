//
// Created by pauline lee on 2021/10/20.
//

#include "min.h"
#include <stdio.h>

/*min(x,y)*/

/*函数原型*/
double min(double x, double y);

/*主调函数*/

int main(void) {
    double a, b;
    printf("%lf", min(1.1, 22.1));
    return 0;

};

/*函数实现*/
double min(double x, double y) {
    return (x < y ? x : y); //expression
};