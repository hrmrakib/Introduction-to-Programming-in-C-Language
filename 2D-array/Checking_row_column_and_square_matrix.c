#include <stdio.h>

int main()
{

    int row, col;
    scanf("%d %d", &row, &col);

    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Checking row matrix
    // if (row == 1)
    // {
    //     printf("This is a row matrix!");
    // }else {
    //     printf("This is not a row matrix!");
    // }

    // Checking column matrix
    // if (col == 1)
    // {
    //     printf("This is a column matrix!");
    // }else {
    //     printf("This is not a column matrix!");
    // }

    // Checking square matrix
    if (row == col)
    {
        printf("This is a square matrix!");
    }else {
        printf("This is not a square matrix!");
    }
    

}