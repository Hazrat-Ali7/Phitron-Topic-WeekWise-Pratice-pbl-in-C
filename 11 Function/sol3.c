#include<stdio.h>

int first_digit(int n);
int last_digit(int n);

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        int first= first_digit(x);
        int last= last_digit(x);
        sum+=first+last;
    }
    printf("Sum = %d\n",sum);
    return 0;
}

int first_digit(int n)
{
    return n/1000;
}
int last_digit(int n)
{
    return n%10;
}

