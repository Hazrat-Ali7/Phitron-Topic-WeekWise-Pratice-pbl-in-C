#include<stdio.h>

int main(void)
{
    int a,b,c;
    int *p=&a,*q=&b,*r=&c;
    scanf("%d %d %d",p,q,r);

    int sum=*p+*q+*r;
    printf("%d",sum);
    return 0;
}
