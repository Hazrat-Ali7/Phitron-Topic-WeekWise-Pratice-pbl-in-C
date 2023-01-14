#include<stdio.h>

void print_by_recursion(int n);

int main(void)
{
    int n;
    scanf("%d",&n);

    print_by_recursion(n);
    return 0;
}
void print_by_recursion(int n)
{
    if(n==1)
    {
        printf("1\n");
        return;
    }
    printf("%d ",n);
    print_by_recursion(n-1);
}

