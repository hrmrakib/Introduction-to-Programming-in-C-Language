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

    printf("\n");

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(i == j){
                printf("i=>%d, j=%d\n", i, j);
                printf("%d \n", a[i][j]);
            }
        }
    }
  
}