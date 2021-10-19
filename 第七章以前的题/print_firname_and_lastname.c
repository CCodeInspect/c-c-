//
// Created by pauline lee on 2021/10/16.
//

#include "print_firname_and_lastname.h"
#include <stdio.h>

/*写一个程序，提示用户输入姓和名，然后以名和姓的方式打印*/
int main(void) {
    char firstname[40]; //名字
    char lastname[40]; //姓
    printf("firstname = %s\n", firstname); //提示输入名
    scanf("%s", firstname); //把输入存入firstname
    printf("lastname= %s\n", lastname); //提示输入姓
    scanf("%s", lastname);//把输入存入lastname
    printf("%s %s", firstname, lastname);
    return 0;


};