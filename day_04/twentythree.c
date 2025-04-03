
// 使用嵌套循环输出九九乘法表。

#include <stdio.h>

int main()
{

    int i, j;

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%-2d\t", j, i, j * i);
        }
        printf("\n");
    }

    printf("\n");
    printf("✨ 魔 ✨ 改 ✨ 九 ✨ 九 ✨ 乘 ✨ 法 ✨ 表 ✨\n");
    printf("========================================\n");

    // 输出表头
    printf("    "); // 左上角空出一点
    for (i = 1; i <= 9; i++)
    {
        printf("%4d", i);
    }
    printf("\n");

    // 分割线
    printf("   -------------------------------------\n");

    // 输出乘法表内容
    for (i = 9; i >= 1; i--)
    {
        printf("%2d |", i); // 行标题
        for (j = 1; j <= i; j++)
        {
            printf("%2d×%d ", i, j);
        }
        printf("\n");
    }

    return 0;
}