#include<stdio.h>

void display_1_to_N(int n)
{
    if(n==0) return;
    display_1_to_N(n-1);
    printf("%d ",n);
}

int main(void)
{
    int n;
    scanf("%d",&n);

    display_1_to_N(n);

    return 0;
}

