#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
int yao_function(void);

 int yao_function(void)
  {
    int a = 50, b = 50 - 1, c ,left_hand = 1,yao = 1;
    int left,right;
    int randomNumber = rand();
     //a为大衍数 b为大衍减一后的49 c为每次运算后的艹
    c = b;
    //随机一托艹（c）分成两边将
    for(i = 0;i<3;i++ ){
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
    }


    //将三次运算后的左右两边的艹合并在一起
    c = left + right;
    //将剩余数除以4 获得6 7 8 9 中任意一个
    yao = c / 4;

       return yao;
   }

int main() {
    srand(time(NULL)); // 只需在程序开始时设置一次种子

    for (int i = 6; i > 0; i--) {
        int yao = yao_function();
        printf("爻：%d\n", yao);
    }

    return 0;
}
