#include<stdio.h>

int count_without(int x,int A[],int size);

int main(void)
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);

    int k;
    scanf("%d",&k);

    int count=count_without(k,A,n);

    printf("%d\n",count);
    return 0;
}

int count_without(int x,int A[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(A[i]!=x)
            count++;
    }
    return count;
}
