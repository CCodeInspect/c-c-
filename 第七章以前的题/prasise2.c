//
// Created by pauline lee on 2021/10/15.
//

#include "prasise2.h"
#include<stdio.h>
#include<string.h>
#include <strings.h>

#define PRASISE "you are an extroordianry being"

int main(void) {
    char name[40];

    printf("what's your name?");
    scanf("%s", name);
    printf("hi,%s %s", name, PRASISE);
    printf("your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof(name));
    printf("the PRASISE has %zd letters ", strlen(PRASISE));
    printf("and occupies %zd memory", sizeof(PRASISE)); //类型 -> sizeof()
    printf("and occupies %zd memory", sizeof PRASISE);//特定量 -> sizeof
    return 0;


};