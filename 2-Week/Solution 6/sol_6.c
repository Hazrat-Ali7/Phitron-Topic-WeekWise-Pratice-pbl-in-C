#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x, &y);

    if(x<0 || y<0)
        printf("Exam mark and Bonus mark must be positive.");
    else if (x+y>=100)
        printf("YES");
    else
        printf("NO");

    return 0;
}
