#include<stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if((a>c && a>d) && (b>c && b>d) )
        printf("NO");
    else if((c>a && c>b) && (d>a && d>b) )
        printf("NO");
    else
        printf("YES");
    return 0;
}
