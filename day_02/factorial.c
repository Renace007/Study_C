// factorial

#include <stdio.h>

int main()
{
    long long n;
    printf("请输入一个数字：\n");
    scanf("%lld", &n);

    if (n < 0)
    {
        printf("负数没有阶乘哦，小调皮~🥹\n");
    }
    else if (n == 0)
    {
        printf("0 的阶乘是 1，本王早就知道啦！✨\n");
    }
    else
    {
        long long result = 1;
        for (int i = 1; i <= n; i++)
            result *= i;
        printf("%lld 的阶乘是 %lld，本王算出来啦！💕\n", n, result);
    }

    return 0;
}