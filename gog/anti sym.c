#include <stdio.h>
#include <conio.h>

void anti(int m, int B[5][5])
{
    int i, j, flag = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (B[i][j] == B[j][i] && B[i][j] == 1)
            {
                if (i != j)
                    flag = 1;
            }
        }
    }
    printf("\nThe relation is ");
    if (flag == 0)
        printf("anti symmetric.");
    else
        printf("not anti symmetric.");
}

void main()
{
    int A[10], B[5][5], m, i, j;
    printf("Enter the size of set A ");
    scanf("%d", &m);
    printf("Enter the elements of set A ");
    for (i = 0; i < m; i++)
        scanf("%d", &A[i]);
    printf("Relation (AxA): {(a,b)| a+b=5 and a,b belongs to A}\n");
    printf("The relation matrix is\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (A[i] + A[j]==5)
                B[i][j] = 1;
            else
                B[i][j] = 0;
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }
    printf("\n");
}