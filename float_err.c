//
// Created by pauline lee on 2021/10/14.
//

#include "float_err.h"
#include <stdio.h>

//int main(void) {
//    float a, b;
//    a = 2.0e20 + 1.0;
//    b = a - 2.0e20;
//    printf("a加上后得：%f\n", a);
//    printf("b减去后得：%f\n", b);
//    return 0;
//};

int main(void) {
    float a, b;
    a = 2.0e7 + 1.0;
    b = a - 2.0e7; //第7位开始就不一致了
    
    printf("加上后：%f\n", a);
    printf("减去后：%f\n", b);
    return 0;
};