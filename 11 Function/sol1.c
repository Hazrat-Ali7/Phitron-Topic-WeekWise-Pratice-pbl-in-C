#include<stdio.h>

void range(int n);

int main()
{
    int n;
    scanf("%d",&n);
    range(n);
    return 0;
}


void range(int n)
{
    if(n>=0)
    {
        for(int i=n;i>=-n;i--)
            printf("%d ",i);
    }
    else
    {
        for(int i=n;i<=-n;i++)
            printf("%d ",i);
    }
}
