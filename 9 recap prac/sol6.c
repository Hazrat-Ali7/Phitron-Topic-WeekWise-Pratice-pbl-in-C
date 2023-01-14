#include<stdio.h>

int main()
{
    int year;
    scanf("%d",&year);

    if(year%400==0)
        printf("YES\n",year);
    else if(year%4==0 && year%100!=0)
        printf("YES\n",year);
    else
        printf("NO\n",year);

    return 0;
}


