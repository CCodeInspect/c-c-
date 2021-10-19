//
// Created by pauline lee on 2021/10/19.
//

#include "locheck.h"
#include<stdio.h>

void mikado(int bah); //函数原型

int main(void) {
    int pooh = 2, bah = 5; //main() 的局部变量
    printf("In main(),pooh =%d and &pooh =%p\n", pooh, &pooh);
    printf("In main(),bah =%d and &bah =%p\n", bah, &bah);
    mikado(1);
    return 0;
};

/*被调用函数*/
void mikado(int bah) {
    int pooh = 10; //mikado()的局部变量
    printf("In mikado(),pooh =%d and &pooh =%p\n", pooh, &pooh);
    printf("In mikado(),bah =%d and &bah =%p\n", bah, &bah);


};