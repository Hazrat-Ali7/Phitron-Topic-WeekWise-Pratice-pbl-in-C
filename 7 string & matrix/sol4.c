#include<stdio.h>
#include<string.h>

int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int A[r][c],B[r][c],res[r][c];
    printf("\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        {
            res[i][j]=A[i][j]+B[i][j];
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}

