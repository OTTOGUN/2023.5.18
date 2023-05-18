#include <stdio.h>

char a=176, b=219;
int main()
{
    // 这里使用的是devc++，输出的是乱码
    //本人能力有限，没办法修改达成目标。。
    printf("%c%c%c%c%c\n",b,a,a,a,b);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",a,a,b,a,a);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",b,a,a,a,b);
}