#include<stdio.h>

int main()
{
    int n,k,sum=0;
    scanf("%d %d",&n,&k);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            sum+= 100*i+j;
        }
    }
    printf("%d\n",sum);


    return 0;
}
