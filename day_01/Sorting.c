
// 冒泡排序

//降序排列
#include <stdio.h>

int main()
{

    int i, j, temp;

    int ap[10] = {1, 5, 8, 7, 2, 4, 6, 3, 9, 0};

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10 - 1 - i; j++)
        {
            if (ap[j] < ap[j + 1])
            {
                temp = ap[j];
                ap[j] = ap[j + 1];
                ap[j + 1] = temp;
            }
        }

 
    }


    for (i = 0; i < 10; i++)
    {
        printf("%d\t", ap[i]);
    }
    return 0;
}