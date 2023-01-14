#include<stdio.h>

int add_num(int x,int y);
int substract_num(int x,int y);
int multiply_num(int x,int y);
int divide_num(int x,int y);


int main()
{
    int x,y,ans=0;
    char o;
    scanf("%c%d%d",&o,&x,&y);
    if(o=='+')
        ans=add_num(x,y);
    else if(o=='-')
        ans=substract_num(x,y);
    else if(o=='*')
        ans=multiply_num(x,y);
    else if(o=='/')
        ans=divide_num(x,y);
    printf("%d",ans);
    return 0;
}

int add_num(int x,int y)
{
    return x+y;
}
int substract_num(int x,int y)
{
    return x-y;
}
int multiply_num(int x,int y)
{
    return x*y;
}
int divide_num(int x,int y)
{
    return x/y;
}
