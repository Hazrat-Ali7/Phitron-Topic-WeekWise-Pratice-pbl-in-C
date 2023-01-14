#include <stdio.h>

int main()
{
    int n,i,primeNo=0;
    scanf("%d",&n);

    int A[n],prime[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=0;i<n;i++)
    {
        prime[i]=0;
    }

    for(i=0;i<n;i++)
    {
        int factor=0;
            for(int j=1;j<=A[i];j++)
            {
            if(A[i]%j==0)
            {
                factor++;
            }
            }
        if(factor==2)
        {
            primeNo++;
            prime[i]=A[i];
        }
    }
    printf("%d\n",primeNo);
    for(i=0;i<n;i++)
    {
        if(prime[i]!=0)
            printf("%d ",prime[i]);
    }

    return 0;
}

