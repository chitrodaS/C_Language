#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter Row size : ");
    scanf("%d", &r);
    printf("Enter column size : ");
    scanf("%d", &c);

    int a[r][c], sum = 0;
    printf("\n\n----:Array A:----\n\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
                sum += a[i][j];
        }
    }

    printf("Sum of all diagonal elements : %d", sum);
    return 0;
}
