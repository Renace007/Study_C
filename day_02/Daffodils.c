

#include <stdio.h>
#include <math.h>

int main()
{

    int num;
    int startnum = 100, endnum = 999;
    int n = 3;
    printf("请输入一个三位数：\n");
    scanf("%d", &num);

    int a = num / 100;
    int b = (num / 10) % 10;
    int c = num % 10;

    if ((int)(pow(a, 3) + pow(b, 3) + pow(c, 3)) == num)
    {
        printf("%d是一个水仙花数\n", num);
    }
    else
    {
        printf("%d不是一个水仙花数\n", num);
    }

    return 0;
}
