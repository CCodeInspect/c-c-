//
// Created by pauline lee on 2021/10/20.
//

#include "double_3.h"
#include<stdio.h>

/*
编写并测试一个函数，该函数以3个double变量的地址作为参数，
把最小值放入第1个变量（这里书又翻译错了= =！），
中间值放入第2个变量，最大值放入第三个变量。
*/

/*函数原型*/
void vsite3(double *small, double *mid, double *large);

/*主调函数*/
int main(void) {
    printf("比大小\n");
    double small = 1.1;
    double mid = 22.3;
    double large = 11.1;
    printf("比较前：%lf %lf %lf\n", small, mid, large);
    vsite3(&small, &mid, &large);
    printf("比较后：%lf %lf %lf\n", small, mid, large);
    return 0;

};


/*被调函数*/
void vsite3(double *small, double *mid, double *large) {
    double temp;
    /*比大小*/
    if (*small >= *mid) {
        temp = *mid;
        *mid = *small;
        *small = temp;
    };
    if (*small >= *large) {
        temp = *large;
        *large = *small;
        *small = temp;
    };
    if (*mid >= *large) {
        temp = *large;
        *large = *mid;
        *mid = temp;
    };
};