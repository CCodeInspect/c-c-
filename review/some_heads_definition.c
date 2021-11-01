//
// Created by pauline lee on 2021/11/1.
//

#include "some_heads_definition.h"
#include<stdio.h>

/*练习函数原型*/
int donut(int a);

int gear(int a, int b);

int guess();

double stuff_it(double a, double *b);

char n_to_char(int a);

int digit(double a, int b);

double which(double *a, double *b);

int random(void);

int sum_int(int a, int b) {  // int
    int c = a + b;
    return c;
};

int sum_double(double a, double b) {  //double
    double c = a + b;
    return c;
};

/*int alter(int a, int b) {

};*/

int max_in_3(int a, int b, int c) {
    return (a > b ? (a > c ? a : c) : (b > c ? b : c));
};

