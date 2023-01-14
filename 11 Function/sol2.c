#include<stdio.h>

void ulta_triangle_pattern(int n);

int main()
{
    int n;
    scanf("%d",&n);
    ulta_triangle_pattern(n);
    return 0;
}

void ulta_triangle_pattern(int n)
{
    for(int i=n;i>0;i--)
    {
        for(int j=i;j<n;j++)
            printf(" ");
        for(int j=1;j<2*i;j++)
            printf("*");
        printf("\n");
    }
}
