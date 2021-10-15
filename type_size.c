//
// Created by pauline lee on 2021/10/15.
//

#include "type_size.h"
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    printf("Type int has a size of %zd size bytes.\n", sizeof(int));//sizeof()以字节为单位
    printf("Type char has a size of %zd size bytes.\n", sizeof(char));
    printf("Type long has a size of %zd size bytes.\n", sizeof(long));
    printf("Type long long  has a size of %zd size bytes.\n", sizeof(long long));
    printf("Type double has a size of %zd size bytes.\n", sizeof(double));
    printf("Type long double has a size of %zd size bytes.\n", sizeof(long double)); //书上给的事例为啥是16个字节？
    return 0;

};