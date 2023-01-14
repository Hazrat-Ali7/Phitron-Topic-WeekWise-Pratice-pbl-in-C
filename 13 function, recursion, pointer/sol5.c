#include<stdio.h>

int sum_by_recursion(int n);

int main(void)
{
    int n;
    scanf("%d",&n);

    int sum=sum_by_recursion(n);

    printf("%d",sum);
    return 0;
}
int sum_by_recursion(int n)
{
    if(n==0)
        return;
    int sum=0;
    sum+=n+sum_by_recursion(n-1);
    return sum;
}
