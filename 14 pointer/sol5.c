#include<stdio.h>

void sum_multiples_of_ten(int A[],int size,int *ptr);

int main(void)
{
    int n,sum=0;
    scanf("%d",&n);
    int A[n];
    for(int i=0; i<n; i++)
        scanf("%d",A+i);

    sum_multiples_of_ten(A,n,&sum);

    printf("%d\n",sum);
    return 0;
}

void sum_multiples_of_ten(int A[],int size,int *ptr)
{
    for(int i=0; i<size; i++)
        if(A[i]%10==0)
            *ptr+=A[i];
}
