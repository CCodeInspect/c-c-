//
// Created by pauline lee on 2021/10/25.
//

/*数组之和*/

#include "sum_arr2.h"
#include <stdio.h>

#define SIZE 5

//函数原型
int sump(int *start, int *end); //数组开始和结束的指针

//主调函数
int main(void) {
    int array[SIZE] = {1, 2, 3, 4, 5};
    long answer;
    answer = sump(array, array + SIZE);
    printf("调用sump结束后得到的数组为 %ld\n", answer);
    return 0;
};

//被调函数
int sump(int *start, int *end) {
    int total = 0;
    while (start < end) { //这里的start和end指的是数组的
        total = total + *start;
        start++;
    };
    return total;
};