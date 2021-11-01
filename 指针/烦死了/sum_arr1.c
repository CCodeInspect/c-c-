//
// Created by pauline lee on 2021/10/25.
//

#include "sum_arr1.h"
#include <stdio.h>

#define SIZE 10

//函数原型
int sum(int array[], int n); //array[]是指针

//主调函数
int main(void) {
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    long answer;
    answer = sum(arr, SIZE);
    printf("answer的大小为 %ld\n", sizeof answer); //这是主调函数的结果，打印结果和被调函数的结果一致
    printf("arr的长度为：%zd\n", sizeof arr); //arr[]的元素都是int型，每个int型元素占4个字节，9个元素占9*4=36个字节
    return 0;
};


//被调函数
int sum(int array[], int n) { //array[]是个指针
    int total = 0;
    int i;
    //函数体统计了当前个数之和
    for (i = 0; i < n; i++) {
        total = total + array[i]; //total把每个元素加到total
    };
    printf("the size of array = %zd\n", sizeof array);
    return total;

};
