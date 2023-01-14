#include<stdio.h>
#include<math.h>

void print_pattern(int n);
int prime(int n);

void main()
{
    int n;
    scanf("%d",&n);
    print_pattern(n);
}

void print_pattern(int n)
{
    int num=1;
    for(int i=0; i<n; i++)
    {
        for(int ii=0; ii<=i; ii++)
        {
            num=prime(++num);
            printf("%d ",num);
        }
        printf("\n");
    }
}
int prime(int n)
{
    int factor=0;
    for (int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            factor++;
            if(factor==1)
                break;
        }
    }
    if(factor==1)
        n=prime(++n);
    else
        return n;
}
