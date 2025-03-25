#include <stdio.h>

int main()
{
    int num1, num2;
    int choice = 1;

    while (choice != 0)
    {
        printf("\n——————————————\n");
        printf("请输入两个整数：\n");
        scanf("%d %d", &num1, &num2);

        if (num1 > num2)
        {
            printf("%d 比 %d 大哦！✨\n", num1, num2);
        }
        else if (num1 < num2)
        {
            printf("%d 比 %d 小哦～🥹\n", num1, num2);
        }
        else
        {
            printf("哇！%d 和 %d 一样大，真是巧合呢！💕\n", num1, num2);
        }

        printf("输入0退出，输入其他数字继续:\n");
        scanf("%d", &choice);
    }

    printf("你已退出程序，欢迎下次再见👋\n");
    return 0;
}