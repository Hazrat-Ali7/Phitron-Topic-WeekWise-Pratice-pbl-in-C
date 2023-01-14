
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

    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        int index,value;
        scanf("%d %d",&index,&value);

        A[index]+=value;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}
