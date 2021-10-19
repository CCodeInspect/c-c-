#include <stdio.h>


int toes;
toes = 3;

void jolly(void); //函数原型
void deny(void);

void twice_as_much();

void square_as();

int main() {


    int a, b;
    a = 5;
    b = 1;
    b = a;
    a = b;


    printf("2倍\n");
    twice_as_much(); //Implicit declaration of function
    printf("平方\n");
    square_as();
    printf("toes的值：%d\n", toes);

    printf("a=%d b=%d", a, b);
    printf("Hello, World!\n");
//    butler(); //调用函数
    jolly();
    deny();
    printf("这是主函数");
    printf("huanhangma\n");
    printf("1234/n0");
    return 0; //return 前的状态是什么？
}

void square_as() {
    printf("这是square的平方: %d\n", toes * toes);
}

void twice_as_much() {
    printf("这是两倍的toes: %d\n", toes * 2);
}


void jolly(void) {
    printf("for he's a jolly good fellow!");
};

void deny(void) {
    printf("which nobody can deny!");
};