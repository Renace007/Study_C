

#include <stdio.h>

int main()
{

    int year;
    int choice = 1;

    while (choice != 0)
    {

        printf("输入0退出程序 或者 输入其他任意数字继续查询 : \n");
        scanf("%d", &choice);
        if (choice == 0)
        {
            printf("程序退出\n");
            break;
        }

        printf("\n-----------------------------------\n");
        printf("请输入你要查询的年份：\n");
 
        scanf("%d", &year);
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            printf("%d是闰年\n", year);
        }
        else
        {

            printf("%d不是闰年\n", year);
        }

 
    }

    return 0;
}
