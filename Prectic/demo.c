#include <stdio.h>

void main()
{
    int i, j, cnt = 0;
    int a[] = {1, 2, 3, 4, 5};

    // for (i = cnt; i < 5; i++)
    // {
    //     for (j = cnt; j <= i; j++)
    //     {
    //         printf("%d ", a[j]);
    //         if (4 == i && i == j)
    //         {
    //             // printf("hel");
    //             i = cnt;
    //             cnt++;
    //             printf("\n");
    //         }
    //     }
    //     printf("\n");
    // }

    for (i = cnt; i < 5; i++)
    {
        for (j = cnt; j <= i; j++)
        {
            printf("%d", a[j]);

            if (4 == i && i == j)
            {
                i = cnt;
                cnt++;
                printf("\n");
            }
        }
        printf("\n");
    }
}