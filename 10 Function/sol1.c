#include <stdio.h>

int sum_two(int x, int y)
{
    return x+y;
}

int main()
{
	int x,y;
	printf("Enter 2 number: ");
	scanf("%d%d",&x,&y);
	int sum= sum_two(x,y);
	printf("%d+%d = %d",x,y,sum);
	return 0;
}


