#include<stdio.h>

void display_N_to_1(int n)
{
    if(n==0) return;
    printf("%d ",n);
    display_N_to_1(n-1);
}

int main(void)
{
    int n;
    scanf("%d",&n);

    display_N_to_1(n);

    return 0;
}


