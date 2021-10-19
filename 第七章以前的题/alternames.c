//
// Created by pauline lee on 2021/10/14.
//

#include "alternames.h"
#include <stdio.h>
#include <inttypes.h>

int main(void) {
    int32_t me32; //int32_t
    me32 = 45933945;
    printf("first,assume int32_t is int: ");
    printf("me32 = %d\n", me32);
    printf("next,let's not make any assumption.\n");
    printf("instead,use a \"macro\" from inttype.h:");
    printf("me32 =%"PRId32 "\n", me32);
    printf("this method is also useful me32= %d \n", me32);


};