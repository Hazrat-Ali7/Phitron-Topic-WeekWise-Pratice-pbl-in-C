#include<stdio.h>

int main(void)
{
    int x,y;
    int *p1=&x,*p2=&y;
    scanf("%d %d",p1,p2);

    float avg = (*p1+*p2)/2.0;

    printf("%.3f",avg);
    return 0;
}
