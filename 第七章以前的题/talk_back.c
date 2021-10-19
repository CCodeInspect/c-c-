//
// Created by pauline lee on 2021/10/15.
//

#include "talk_back.h"
#include <stdio.h>
#include <string.h> //strlen()

#define DENSITY 62.4 //人体密度（单位：磅/立方英尺）

int main(void) {
    float weight, volume;
    int size, letters;
    char name[40]; //name 是个可容纳40个字符的数组
    printf("hi,what\'s your name ?");
    scanf("%s", name);
    printf("%s,what\'s your weight in your pound?", name);
    scanf("%f", &weight);
    size = sizeof(name);
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("your volume is %d", volume);
    printf("your first name has %d letters", letters);
    printf("we have %d bytes to store it \n", size);
    return 0;
};

