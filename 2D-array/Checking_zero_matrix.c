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

    int total_value = row * col;
    int zero = 0;
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(a[i][j] == 0) {
                zero++;
            }
        }
    }

    if (total_value == zero)
    {
        printf("This is a Zero matrix!");
    }else {
        printf("This is not a Zero matrix!");
    }

}