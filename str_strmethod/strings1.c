//
// Created by pauline lee on 2021/11/19.
//

#include "strings1.h"
#include <stdio.h>

#define MSG "i am a symbolic string constant"
#define MAXLENGTH 81

int main(void) {
    char words[MAXLENGTH] = "i am a string in an array";
    const char *pt1 = "something is pointing at me";
    puts("here are some strings:");
    puts(MSG);
    puts(words);
    puts(pt1);
    words[9] = 'p'; //替换下标为9的字符 ——> r ——> p
    puts(words); //因此打印出得字符串就是stping,而不是string
    return 0;

}