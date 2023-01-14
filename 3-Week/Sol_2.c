
#include<stdio.h>

int main()
{
    int n,sum=0;

    scanf("%d",&n);

    printf("The first %d natural number is:\n",n);

    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
        sum+=i;
    }
    printf("\nThe Sum is: %d\n",sum);

    return 0;
}
