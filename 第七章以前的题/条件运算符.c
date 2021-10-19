//
// Created by pauline lee on 2021/10/18.
//

#include "条件运算符.h"
#include<stdio.h>

int x, y;

/*
 x =(y<0)?-y:y
 max =(a>b)?a:b

 */
int main(void) {
    if (y < 0)
        x = -y;
    else
        x = y;
};