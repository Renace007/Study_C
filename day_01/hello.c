#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char input[100];
    int num;
    int is_valid = 1;

    printf("请输入一个整数：\n");
    // 用 fgets 读取整行输入
    if (fgets(input, sizeof(input), stdin) != NULL)
    {
        // 检查字符串中每个字符是否都是数字或负号或换行
        for (int i = 0; input[i] != '\0' && input[i] != '\n'; i++)
        {
            if (!(isdigit(input[i]) || (i == 0 && input[i] == '-')))
            {
                is_valid = 0;
                break;
            }
        }

        if (is_valid)
        {
            // 转换成整数
            num = atoi(input);

            if (num % 2 == 0)
            {
                printf("这是一个偶数，本王觉得它超乖！✨\n");
            }
            else
            {
                printf("这是一个奇数，好调皮呀！但我还是超喜欢它！💕\n");
            }
        }
        else
        {
            printf("输入的不是纯整数哦，小调皮！请重新运行试试看~🥹\n");
        }
    }
    else
    {
        printf("读取输入失败了，呜呜~🥺\n");
    }

    return 0;
}