//
// Created by pauline lee on 2021/10/22.
//

#include "遍历一个二维数组.h"
#include<stdio.h>

#define a 3
#define a_0 3

int main(void) {
    //声明数组
    int arr[a][a_0] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };
    for (int i = 0; i < arr; i++) {
        for (i = 0; i < arr; i++) {
            printf("我想知道怎么打印的\n", arr[0][1]);
        };
    };
    return 0;
};

