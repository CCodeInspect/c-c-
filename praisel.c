//
// Created by pauline lee on 2021/10/15.
//

#include "praisel.h"
#include <stdio.h>

#define PRAISE "you are an extraoridinary being"

int main(void) {
    char name[40];
    printf("what\'s your name?");
    scanf("%s", name);
    printf("hi,%s %s\n", name, PRAISE);
    return 0;
};