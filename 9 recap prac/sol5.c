#include<stdio.h>

int main()
{
    char op;
    scanf("%c",&op);
    int n1,n2;
    scanf("%d%d",&n1,&n2);

    if(op=='+')
           printf("%d ",n1+n2);
    else if(op=='-')
           printf("%d ",n1-n2);
    else if(op=='*')
           printf("%d ",n1*n2);
    else if(op=='/')
           printf("%d ",n1/n2);
    else
        printf("Invalid operator");
}

