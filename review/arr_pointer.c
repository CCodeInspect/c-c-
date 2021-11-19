//
// Created by pauline lee on 2021/11/5.
//

#include "arr_pointer.h"
#include<stdio.h>

#define NUM 3
int arr[3] = {
        {5, 1, 9}
};

//打印数组的指针

int main(void) {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    };
    printf("\n");
};