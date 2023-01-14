#include<stdio.h>

void print_even(int n);

int main()
{
    int x;
    scanf("%d",&x);
    print_even(x);
    return 0;
}
void print_even(int n)
{
    for(int i=2;i<=n;i+=2)
        printf("%d ",i);
}
