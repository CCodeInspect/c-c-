//
// Created by pauline lee on 2021/10/19.
//

#include "烦死了/po_0.h"
#include<stdio.h>

/*原型函数*/
void exchange(int *a, int *b);

/*主调用函数*/
/*主要是要交换两个值*/
int main(void) {
    int x = 5;
    int y = 10;
    printf("还没调用交换函数x=%d y=%d \n", x, y);
    printf("交换前的地址 x地址为：%d y地址为：%d\n", &x, &y);
    printf("+++++++++++++++++++++++++++++++\n");
    exchange(&x, &y);
    printf("现在x=%d y=%d\n", x, y);
    printf("现在x地址为： %d y地址为：%d", &x, &y);
};

/*函数定义*/
void exchange(int *a, int *b) {
    int temp;
    temp = *a; //a的地址存给temp
    *a = *b; //b的地址存给*a地址
    *b = temp; //这时temp存的是a的值

};
