//
// Created by pauline lee on 2021/10/20.
//

#include "larger_double.h"
#include<stdio.h>

/*编写并测试一个函数large_of()，该函数把两个double类型变量的值替换为较大的值。
例如large_of(x, y)会把x，y中较大的值重新赋给两个变量
*/


/*函数原型*/
void large_of(double *pa, double *pb);

/*主调函数*/
int main(void) {
    double x = 22.0;
    double y = 910.1;
    printf("输入两个数\n");
    printf("取地址前x =%.2f y=%,2f\n", x, y);
    large_of(&x, &y);
    /*调用后*/
    printf("取地址后的%.2f %.2f\n", x, y);
};

/*被调函数*/
void large_of(double *pa, double *pb) {
    *pb = *pa >= *pb ? *pa : *pb;
    *pa = *pb;

};