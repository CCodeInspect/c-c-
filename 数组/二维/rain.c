//
// Created by pauline lee on 2021/10/21.
//

#include "rain.h"
#include<stdio.h>

#define MONTNS 12
#define YEARS 5

/*计算每年总降水量
 * 年平均降水量
 * 5年中每月的降水量*/

int main(void) {
    //用2010-2014年的降水量数据初始化数组
    const float rain[YEARS][MONTNS] = {
            {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
            {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
            {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
            {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
            {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6}
    };
    int year, month;
    float subtot, total;
    printf("YEAR REINFALL (inches)\n");
    for (year = 0; year < YEARS; year++) {
        for (month = 0; month < MONTNS; month++) {
            subtot = subtot + rain[year][month];
            printf("%5d %15.1f\n", 2010 + year, subtot);
            total += subtot;
        };
        printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
        printf("MONTHLY AVERAGES\n\n");
        printf("Jan Feb Mar Apirl May Jun Jul Aug Sep Oct Nov Dec ");
        printf("Nov Dec \n");
    };
    for (month = 0; month < MONTNS; month++) {
        for (year = 0; year < YEARS; year++) {
            subtot += rain[year][month];
            printf("%4.1f", subtot / YEARS);
        };
        printf("\n");
    };
};