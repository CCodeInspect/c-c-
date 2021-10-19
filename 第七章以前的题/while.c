//
// Created by pauline lee on 2021/10/16.
//

#include "while.h"
#include <stdio.h>

#define CONST  60 //每小时60分钟

int main(int argc, char *argv[]) {
    int hours, minutes, input;
    // convert minutes to hours
    printf("convert minutes to hours\n");
    printf("input the number of minutes(<=0 to quit): \n");
    scanf("%d", &input);
    while (input > 0) {
        hours = input / CONST;
        minutes = input % CONST;
        printf("convert to %d hour and %d minutes\n", hours, minutes);

        printf("please continue input the number of minutes(<=0 to quit)\n");
        scanf("%d", &input);
    }
    printf("progran exit!\n");


};
