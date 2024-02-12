#include <stdio.h>
int main()
{
    int num[10][10], row, col, i, j;
    int tran[10][10];
    printf("Enter the row and column of the matrix : ");
    scanf("%d %d ", &row, &col);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("num[%d][%d]= ", i, j);
            scanf("%d", &num[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            tran[j][i] = num[i][j];
        }
    }
    printf("The actual matrix is \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
    printf("\n The transpose of the matrix is \n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d ", tran[i][j]);
        }
        printf("\n");
    }
    return 0;
}