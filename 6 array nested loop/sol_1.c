#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int A[n];
    A[0]=0; A[1]=1;

    if(n==1)
        printf("%d",A[0]);
    else if(n==2)
        printf("%d %d",A[0],A[1]);
    else
    {
        for(int i=2;i<n;i++)
        {
            A[i]=A[i-1]+A[i-2];
            printf("%d ",A[i]);
        }
    }
}

