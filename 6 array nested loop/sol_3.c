#include <stdio.h>

int main()
{
    int n,i,sum=0;
    scanf("%d",&n);

    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        if(A[i]%2==1)
            sum+=A[i];
    }
    if(sum%2==0)
        printf("Yes");  //even
    else
        printf("NO");

}


