//
// Created by pauline lee on 2021/10/21.
//

#include "day_mon2.h"
#include<stdio.h>

int main(void) {
    const int days[] = {1, 2, 3, 4, 5};
    int index;
    for (index = 0; index < sizeof days; index++) {
        printf("%2d %2d\n", index, days[index]);
    };
    return 0;
};