//
// Created by pauline lee on 2021/11/4.
//

#include "find_max_medium_small.h"
#include<stdio.h>

double find_max_medium_min(double *max, double *medium, double *min);

int main(void) {
    double max = 5.5;
    double medium = 3.3;
    double small = 1.1;
    find_max_medium_min(&max, &medium, &small);
    printf("%f %f %f", max, medium, small);
};

double find_max_medium_min(double *max, double *medium, double *min) {
    double temp;

    if (*min >= *medium) {
        temp = *medium;
        *medium = *min;
        *min = temp;
    };
    if (*min >= *max) {
        temp = *max;
        *max = *min;
        *min = temp;
    };
    if (*medium >= *max) {
        temp = *max;
        *max = *medium;
        *medium = temp;
    };
};