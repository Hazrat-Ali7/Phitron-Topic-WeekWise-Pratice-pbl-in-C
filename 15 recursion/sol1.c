#include<stdio.h>

int make_power(int n,int m)
{
    if(m==0)    return 1;
    return n*make_power(n,m-1);
}

int main(void)
{
    int n,m;
    scanf("%d%d",&n,&m);

    int ans = make_power(n,m);

    printf("%d",ans);
    return 0;
}
