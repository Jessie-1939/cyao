#include <stdio.h>   // 标准输入输出库，包含printf, scanf等函数
#include <stdlib.h>  // 标准库函数，包含内存管理（malloc, free等）和杂项函数
#include <string.h>  // 字符串操作函数，如strcpy, strcat, strlen等
#include <math.h>    // 数学函数库，包含sin, cos, sqrt等数学运算函数
#include <stdbool.h> // 布尔类型支持，包含bool, true, false等定义
#include <ctype.h>   // 字符分类函数，如isalpha, isdigit等
#include <time.h>    // 时间和日期函数库
int yao_function(void);
  
int main() {
    int yao = 0;
    //获得了一个爻 这样的操作要进行6次 ，所以我选择建函数来包括这个操作
    for(int i = 6; i>0;i--){
        yao = yao_function();
        printf("爻：%d\n", yao);

     }

 int yao_function(void) {
    int a = 50, b = 50 - 1, c ,left_hand = 1,yao = 1;
    int left,right;
    // 初始化随机数生成器的种子
    srand(time(NULL));
      // 生成随机数
    int randomNumber = rand();
     //a为大衍数 b为大衍减一后的49 c为每次运算后的艹
    c = b;
    //随机一托艹（c）分成两边将
    left = randomNumber % c;
    right = c - left;
    //将右边的艹取出一个1，将这个1放到左手
    right = right - 1;
    left_hand=left_hand+1;
    //将右边的艹平均分成每4个一堆，剩余的艹放到左手
    left_hand=left_hand+right%4;
    right=(right/4)*4;
    //对左手做出同样操作  将左边的艹平均分成每4个一堆，剩余的艹放到左手
    left_hand=left_hand+left%4;
    left=(left/4)*4;
    //现在完成了第一次运算 接下来还要再进行俩次运算


    c = left + right;//将左右两边的合并在一起
    // 初始化随机数生成器的种子
    srand(time(NULL));
    randomNumber = rand();
    //随机一托艹（c）分成两边将
    left = randomNumber % c;
    right = c - left;
    //将右边的艹取出一个1，将这个1放到左手
    right = right - 1;
    left_hand=left_hand+1;
    //将右边的艹平均分成每4个一堆，剩余的艹放到左手
    left_hand=left_hand+right%4;
    right=(right/4)*4;
    //对左手做出同样操作  将左边的艹平均分成每4个一堆，剩余的艹放到左手
    left_hand=left_hand+left%4;
    left=(left/4)*4;
  //现在完成了第二次运算 接下来还要再进行一次运算


  c = left + right;//将左右两边的合并在一起
    // 初始化随机数生成器的种子
    srand(time(NULL));
    randomNumber = rand();
    //随机一托艹（c）分成两边将
    left = randomNumber % c;
    right = c - left;
    //将右边的艹取出一个1，将这个1放到左手
    right = right - 1;
    left_hand=left_hand+1;
    //将右边的艹平均分成每4个一堆，剩余的艹放到左手
    left_hand=left_hand+right%4;
    right=(right/4)*4;
    //对左手做出同样操作  将左边的艹平均分成每4个一堆，剩余的艹放到左手
    left_hand=left_hand+left%4;
    left=(left/4)*4;
  //现在完成了第三次运算

    //将三次运算后的左右两边的艹合并在一起
    c = left + right;
    //将剩余数除以4 获得6 7 8 9 中任意一个
    yao = c / 4;

       return yao;
   }


}
