//
// Created by pauline lee on 2021/10/15.
//

#include "pizza.h"
#include <stdio.h>

#define CON "这是一个define的常量"
#define PI 3.141592

int main(void) {
    float area, circum, radius;
    printf("what is the radius of pizza ?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("your basic pizza parameters are as follows:\n");
    printf("circumference =%1.2f,ares =%1.2f\n ", circum, area);
    printf("这是常量 ：%s", CON); // %s
    return 0;

};