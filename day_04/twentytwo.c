
// 编写一个程序，输出 100 到 200 之间所有能被 3 和 5 同时整除的数。

#include <stdio.h>

int main()
{

    int i;

    printf("100到200之间能被3和5同时整除的数有：\n");
    for (i = 100; i <= 200; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d ", i);
        }
    }

    /*
    🔥找出100到200之间既能被7整除又能被11整除的所有数，并：
    1.	用一个数组保存它们；
    2.	最后一次性打印出这个数组中的所有数；
    3.	打印这些数的个数。
    */

    printf("\n--------------------------\n");
    int arr[20]; // 预估不会超过20个
    int count = 0;

    for (int i = 100; i <= 200; i++)
    {
        if (i % 7 == 0 && i % 11 == 0)
        {
            arr[count] = i; // 存进数组
            count++;        // 记录数量
        }
    }

    printf("100到200之间能被7和11同时整除的数有 %d 个，它们是：\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("\n--------------------------\n");

    int start, end;
    printf("请输入范围的起始值(例如100)：");
    scanf("%d", &start);
    printf("请输入范围的结束值(例如200)：");
    scanf("%d", &end);
    int arr2[100]; // 预估不会超过100个
    int count2 = 0;
    for (int e = start; e <= end; e++)
    {
        if (e % 7 == 0 && e % 11 == 0)
        {
            arr2[count2] = e; // 存进数组
            count2++;         // 记录数量
        }
    }

    printf("在范围 %d 到 %d 之间能被7和11同时整除的数有 %d 个，它们是：\n", start, end, count2);
    for (int i = 0; i < count2; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    printf("其中偶数的有：\n");
    int evenCount = 0;
    for (int i = 0; i < count2; i++)
    {
        if (arr2[i] % 2 == 0)
        {
            printf("%d ", arr2[i]);
            evenCount++;
        }
    }
    if (evenCount == 0)
    {
        printf("没有偶数哦~");
    }
    else
    {
        printf("\n共 %d 个偶数\n", evenCount);
    }

    if (count2 > 0)
    {
        int sum = 0;
        for (int i = 0; i < count2; i++)
        {
            sum += arr2[i];
        }
        printf("这些数的和是：%d\n", sum);
        printf("这些数的平均值是：%.2f\n", (float)sum / count2);
        int max = arr2[0];
        int min = arr2[0];
        for (int i = 1; i < count2; i++) {
            if (arr2[i] > max) {
                max = arr2[i];
            }
            if (arr2[i] < min) {
                min = arr2[i];
            }
        }
        printf("这些数的最大值是：%d\n", max);
        printf("这些数的最小值是：%d\n", min);
    }

    return 0;
}
