#include<stdio.h>

int main()
{
    int a,b,c, sum;
    scanf("%d %d %d", &a,&b,&c);
    sum=a+b+c;

    if(a<b && a<c)
        sum=sum-a;
    else if(b<a && b<c)
        sum=sum-b;
    else if (c<a && c<b)
        sum=sum-c;
    else {
        sum=sum-a;
    }

    printf("%d",sum);
    return 0;
}
