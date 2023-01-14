#include<stdio.h>
#include<string.h>

int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int matrix[r][c],transpose[c][r];

    printf("\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n");

    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            transpose[i][j]=matrix[j][i];
        }
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
