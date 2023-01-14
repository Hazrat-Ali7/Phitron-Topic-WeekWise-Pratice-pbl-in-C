#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int A[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d - ",A[i]);

            for(int j=0;j<n;j++)
            {
                if(i!=j)
                    printf("%d ",A[j]);
            }
        printf("\n");

    }

}

