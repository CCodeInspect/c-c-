//
// Created by pauline lee on 2021/10/16.
//

#include "for_0.h"
#include <stdio.h>

int main(void) {
/*    for (int n = 2, m = 6; n < m; n *= 2, m += 2) {
        printf("%d %d\n", n, m);
    };
    printf("\n*****\n");*/
    for (int n = 5; n > 0; n--) {
        for (int m = 0; m <= n; m++) {
            printf("=");
        };
        printf("\n");
    };
    return 0;
};