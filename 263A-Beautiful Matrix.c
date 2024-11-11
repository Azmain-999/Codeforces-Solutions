#include<stdio.h>
#include<stdlib.h>

int main()
{
    int matrix[5][5];
    int i,j,count=0;
    int row,col;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5;j++)
        {
            scanf("%d",&matrix[i][j]);

        }
    }
      for(i=0; i<5; i++)
            {
                for(j=0; j<5; j++)
                {
                    if(matrix[i][j]==1)
                    {
                        row=i;
                        col=j;
                    }
                }

            }
    row= abs(row-2);
    col= abs(col-2);
    count=row+col;

    printf("%d\n",count);
    return 0;


}
