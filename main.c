#include <stdio.h>   // 标准输入输出库，包含printf, scanf等函数
#include <stdlib.h>  // 标准库函数，包含内存管理（malloc, free等）和杂项函数
#include <string.h>  // 字符串操作函数，如strcpy, strcat, strlen等
#include <math.h>    // 数学函数库，包含sin, cos, sqrt等数学运算函数
#include <stdbool.h> // 布尔类型支持，包含bool, true, false等定义
#include <ctype.h>   // 字符分类函数，如isalpha, isdigit等
#include <time.h>    // 时间和日期函数库
int main() {
    int a = 50, b = 50 - 1, c ,left hand ;
    int left,right;
    // 初始化随机数生成器的种子
    srand(time(NULL));
      // 生成随机数
    int randomNumber = rand();
 
    c = b;
    //将50
    left = randomNumber % c;
    right = c - left;


}