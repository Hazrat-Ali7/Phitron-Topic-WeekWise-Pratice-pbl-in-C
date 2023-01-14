#include<stdio.h>

int largest_of_three(int x,int y,int z)
{
    return x>y&&x>z?x:y>z?y:z;
}


int main()
{
    int x,y,z;
	printf("Enter three number: ");
	scanf("%d%d%d",&x,&y,&z);
	int largest= largest_of_three(x,y,z);
    printf("%d is Largest.",largest);
    return 0;
}

