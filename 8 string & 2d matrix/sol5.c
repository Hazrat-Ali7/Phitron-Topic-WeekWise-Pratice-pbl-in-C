#include<stdio.h>
#include<string.h>

int main()
{
    int A[9][9];
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            A[i][j]=0;
        }
    }
    int n,safe=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);

        for(int p=1;p<=8;p++)
        {
            A[x][p]+=1;
            A[p][y]+=1;
        }
        A[x][y]+=8;
        if(A[x][y]==10)
            safe++;
        else
            safe--;
    }

    printf("safe rooks - %d\n",safe);

    for(int i=1;i<=8;i++)
    {
        for(int j=1;j<=8;j++)
        {
            if(A[i][j]==10)
            printf("%d %d\n",i,j);
        }

    }

    return 0;
}


