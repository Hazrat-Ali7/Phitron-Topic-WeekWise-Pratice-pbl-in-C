#include<stdio.h>

void factors(int n);

int main()
{
    int n;
    scanf("%d",&n);
    factors(n);
    return 0;
}

void factors(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d ",i);
    }
}
