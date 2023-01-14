
#include<stdio.h>

int main()
{
    int n,i=1;
    printf("Input number of terms: ");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("Number is : %d and Square of the %d is : %d\n",i,i,i*i);
        i++;
    }
    return 0;
}
//Number is : 1 and Square of the 1 is :1
