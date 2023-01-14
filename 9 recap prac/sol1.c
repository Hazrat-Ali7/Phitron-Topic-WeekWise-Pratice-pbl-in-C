#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n>0)
    {
        for(int i=n;i>=-n;i--)
            printf("%d ",i);
    }
    else if(n<0)
    {
        for(int i=n;i<=-n;i++)
            printf("%d ",i);
    }
    else
        printf("0");
}
