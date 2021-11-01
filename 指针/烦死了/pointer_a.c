//
// Created by pauline lee on 2021/10/25.
//

#include "pointer_a.h"
#include <stdio.h>

#define num 5
int dates[num] = {1, 2, 3, 4, 5};
int *pi;

int main(void) {

//    pi = dates;
//    pi = &dates[0]; //pi指向的是dates数组的下标为0的地址
    dates + 2 == &dates[2]; //下标为2的地址
    *(dates + 2) == dates[2]; //解引下标为2的地址
    for (int i = 0; i < num; i++) {
        printf("i+1 = %d，\n解引数组dates加1后 =%d\n", i + 1, *(&dates[1] + 1)); //dates = &dates[0];
    };
};
