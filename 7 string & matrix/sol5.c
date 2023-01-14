#include<stdio.h>
#include<string.h>

int main()
{
    int board[4][4];
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            board[i][j]=0;
        }
    }

    int rook;
    scanf("%d",&rook);
    for(int i=1; i<=rook; i++)
    {
        int r,c;
        scanf("%d %d",&r,&c);
        board[r][c]=1;
    }

    printf("Total empty cells - %d\n",9-rook);

    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            if(board[i][j]==0)
                printf("%d %d\n",i,j);
        }
    }
    return 0;
}

