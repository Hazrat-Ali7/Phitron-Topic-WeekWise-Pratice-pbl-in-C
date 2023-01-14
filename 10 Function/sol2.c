#include<stdio.h>

int odd_checking(int x)
{
    return x%2;
}


int main()
{
    int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	int result= odd_checking(x);
	if(result)
        printf("%d is Odd.",x);
    else
        printf("%d is Even.",x);
    return 0;
}
