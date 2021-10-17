//
// Created by pauline lee on 2021/10/17.
//

#include "judge_char_and_nonchar.h"
#include<stdio.h>
//#include <strings.h>
#include <string.h>

/**/
int main(void) {
    char cc[26]; //初始化数组
    int index = 0; //下标
    char c_0 = 'a'; //从a开始
    int index1;
    /*这里有一个错误，在第一个for循环中的intialized 中不要初始化已经初始化的变量,
     * 因为在每次循环的时候都会初始化一次，这样每次都会清空数组存储的内容
     * 如下为错误写法
     * for (char cc[26];;){循环体};*/
    for (index = 0; index < 26; index++, c_0++) { //外层打印26次
        cc[index] = c_0; //把每个c_0 加入到cc数组中，循环第一次得到的cc内只存了第一个元素a，这里是为了存储26个字母的数组，因此得到一个26个字母的数组；
//        /*19行～25行为错误示例
//        原因：外层循环在第一次循环时，index下标为0，然后立刻进入内层的循环，
//        而内层的循环需要立刻执行index++，因此当前index的值i为index+1,内层循环的index大于外层第一次循环的index,
//        所以跑出来为空指针*/
//        for (index = 0; index < 26; index++) {
//            printf("%s\n", cc);
//        };
        /*如果非要嵌套内循环，则要清楚一个问题：
         * （1）第一个for循环是为了输出一个完整数组；
         * （2）第一个循环是为了打印该数组
         * （3）两个循环的下标不是同一个下标*/
//        for (index1 = 0; index1 < index + 1; index1++) {
//            printf("%s\n", cc[index]);//
//        };
//        cc[index] = c_0;
    };
    /*最好的方法是不嵌套循环
     * （1）第一个循环输出一个完整数组
     * （2）在第一个循环的循环体外直接打印数组变量名
     * （3）单独新开一个循环，专门用来打印数组*/
    //   for (index = 0; index < 26; index++) {
    printf("%s\n", cc);
    //   };


};