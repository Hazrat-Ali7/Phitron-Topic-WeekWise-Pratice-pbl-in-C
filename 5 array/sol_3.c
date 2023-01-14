#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    int max=A[0];
    for(int i=1;i<n;i++)
    {
        if(A[i]>max)
            max=A[i];
    }

    int mainArr[max+1];
    for(int i=0;i<=max;i++)
    {
        mainArr[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        mainArr[A[i]]+=1;
    }

    int unq=0;
    for(int i=0;i<=max;i++)
    {
        if(mainArr[i]>0)
            unq++;
    }

    if(unq==1)
        printf("YES");
    else
        printf("NO");
}

