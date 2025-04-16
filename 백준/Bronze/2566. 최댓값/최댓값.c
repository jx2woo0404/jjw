#include <stdio.h>

int main(void)
{
    int ary[9][9];
  
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &ary[i][j]);
        }
    }
    int row = 0;
    int col = 0;
    int max = -1;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (ary[i][j] > max)
            {
                max = ary[i][j];
                row = i;
                col = j;
            }
        }
    }

   
    printf("%d \n%d %d ", max,row+1,col+1);
    return 0;
}