#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);

    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int max=A[0];
    for(i=1;i<n;i++)
    {
        if(A[i]>max)
            max=A[i];
    }

    int mainArr[max+1];
    for(i=0;i<=max;i++)
    {
        mainArr[i]=0;
    }
    for(i=0;i<n;i++)
    {
        mainArr[A[i]]+=1;
    }

    int k;
    scanf("%d",&k);

    int count=0;

    for(i=0;i<=max;i++)
    {
        if(mainArr[i]>0)
            count++;
        if(count==k)
        {
            printf("%d",i);
            break;
        }
    }


}

