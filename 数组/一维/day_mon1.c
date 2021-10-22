//
// Created by pauline lee on 2021/10/21.
//

#include "day_mon1.h"
#include<stdio.h>

#define MONTH 12

int main(void) {
    int days[MONTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
//    int days1[MONTH];//未赋初值得到的是0
    int index;
    for (index = 0; index < MONTH; index++) {
        printf("%2d %2d\n", index + 1, days[index]);
    };
};