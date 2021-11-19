//
// Created by pauline lee on 2021/11/4.
//

#include "遍历2维数组.h"
#include<stdio.h>

#define YEAR 5
#define MONTH 12

//5年12月
//多维数组第一个参数指的是该数多维数组有多少个元素
//第二个参数指的是每个元素中有多少个元素
const int arr[YEAR][MONTH] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}
};


const int arr_0[2][3][4] = {
        {1, 2, 3},
        {1, 2, 3},
};

int main(void) {
    for (int i = 0; i < YEAR; i++) {
        for (int j = 0; j < MONTH; j++) {
            printf("%d ", arr[i][j]);
        };
        printf("\n");
    };
};