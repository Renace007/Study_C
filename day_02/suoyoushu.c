

#include <stdio.h>

int main()
{
    printf("奇数\n");
    for (int i = 1; i <= 100; i++)
    {
        int shu = i % 2;
        if (shu != 0)
        {

            printf("%d ", i);
        }
    }
    printf("\n偶数\n");
    for (int i = 1; i <= 100; i++)
    {

        int shu = i % 2;
        if (shu == 0)
        {

            printf("%d ", i);
        }
    }

    printf("\n——————\n");
    printf("本王现在开始计算 1 到 10 的整数之和...\n");
    
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    
    printf("计算完成！1 到 10 的和是：%d，本王真厉害！✨\n", sum);


//计算 1 到 n 的所有整数之和（n 由用户输入）


    int n;
    printf("请输入一个整数：");
    scanf("%d", &n);
    int sum2 = 0;
    for (int i = 1; i <= n; i++)
    {
        sum2 += i;
    }
    printf("1 到 %d 的和是：%d\n", n, sum2);


//计算阶乘 n!（n 由用户输入）

    long long n2;
    printf("请输入一个数字：\n");
    scanf("%lld", &n2);

    if (n2 < 0)
    {
        printf("负数没有阶乘哦，小调皮~🥹\n");
    }
    else if (n2 == 0)
    {
        printf("0 的阶乘是 1，本王早就知道啦！✨\n");
    }
    else
    {
        long long result = 1;
        for (int i = 1; i <= n2; i++)
            result *= i;
        printf("%lld 的阶乘是 %lld，本王算出来啦！💕\n", n2, result);
    }




    return 0;
}