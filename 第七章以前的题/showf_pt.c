//
// Created by pauline lee on 2021/10/14.
//

#include "showf_pt.h"
#include <stdio.h>

int main(void) {
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;
    printf("%f can be writen %e \n", aboat, aboat);
    printf("%e can be writen %f\n", abet, abet);
    printf("%LF can be writen %LE \n", dip, dip);
    return 0;


};