//
// Created by pauline lee on 2021/10/20.
//

#include "average_two.h"
#include <stdio.h>

/*两数调和平均数
*两数的调和平均数这样计算：先得到两数的倒数，然后计算这两个倒数的平均值，
*最后取计算结果的倒数，
*编写一个函数，接受两个double类型的参数，返回这两个参数的调和平均数
 */

/*函数原型*/
double avg(double a, double b);

/*主调函数*/
int main(void) {
    double res;
    res = avg(1.1, 22.1);
    return 0;

};

/*被调函数*/
double avg(double a, double b) {
    double res;
    if (a != 0 && b != 0) {
        res = (1.0 / ((1.0 / a + 1.0 / b) / 2.0));
        printf("%lf", res);
        return res;

    } else
        printf("a或b其中之一为0，请检查\n");
    return -1;
};