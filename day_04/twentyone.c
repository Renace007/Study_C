#include <stdio.h>

int main()
{
    float a, b, c;
    int choice = 1;

    while (choice != 0)
    {
        printf("\n输入0退出程序，或输入其他任意数字继续查询：");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("程序退出，抱抱你~再见啦！👋\n");
            break;
        }

        printf("\n-----------------------------------\n");
        printf("请输入三角形的三条边（用空格分隔）：");
        scanf("%f %f %f", &a, &b, &c);

        if (a <= 0 || b <= 0 || c <= 0)
        {
            printf("边长必须是正数哦！重新输入试试看吧～💗\n");
            continue;
        }

        if (a + b > c && a + c > b && b + c > a)
        {
            printf("可以构成三角形~🎉\n");
            printf("三角形的周长为：%.2f\n", a + b + c);
        }
        else
        {
            printf("不能构成三角形，抱抱你别难过~🥺\n");
        }
    }

    return 0;
}