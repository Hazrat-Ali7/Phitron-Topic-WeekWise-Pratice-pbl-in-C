
#include<stdio.h>

int main()
{
    int n,target;
    scanf("%d",&n);

    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d",&target);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                int temp=A[i]+A[j];
                if(temp==target)
                    {   printf("YES");
                        return 0;
                    }

            }
        }
    }
    printf("NO");
    return 0;

}
