#include<stdio.h>

int add_last_dgt(int *ptr,int size)
{
    if(size==0) return 0;
    return (*ptr)%10+add_last_dgt(ptr+1,size-1);
}

int main(void)
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
        scanf("%d",(A+i));

    int sum = add_last_dgt(A,n);

    printf("%d",sum);
    return 0;
}
