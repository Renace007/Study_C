
// ，判断一个数是否为素数
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("请输入一个整数：");
    scanf("%d", &n);

    int is_prime = 1;

    if (n <= 1)
    {
        // 1 和 负数都不是素数
        is_prime = 0;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime)
    {
        printf("%d 是素数，本王好喜欢它的“纯粹”！✨\n", n);
    }
    else
    {
        printf("%d 不是素数，别灰心，继续加油！🥹\n", n);
    }
    return 0;
}