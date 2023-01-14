#include<stdio.h>

int sum_of_N(int n)
{
    if(n==0) return 0;
    return n+sum_of_N(n-1);
}

int main(void)
{
    int n;
    scanf("%d",&n);

    int sum = sum_of_N(n);

    printf("%d",sum);
    return 0;
}



