//
// Created by pauline lee on 2021/10/12.
//

#include "new_c.h"
//
// Created by pauline lee on 2021/10/12.
//
#include <stdio.h>

int main(void) {
    float weight;
    float value;
    printf("are you worth your weight in platinum?\n");
    printf("let's check out it\n");
    printf("please enter your weight in pounds: ");

    /*获取用户输入*/
    scanf("%f", &weight);

    /*假设白金的价格是每盎司¥1700*/
    /*14.5833用于把英镑常衡盎司转换为金衡盎司*/
    value = 1700 * weight * 14.5833;
    printf("your weight in platinum is worth $%.2f.\n", value);
    printf("you are easily worth that! if platinum price drop,\n");
    printf("eat more to maintain your value.\n");
    return 0;
};
