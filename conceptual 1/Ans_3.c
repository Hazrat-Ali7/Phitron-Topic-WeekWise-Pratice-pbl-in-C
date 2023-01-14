#include<stdio.h>

int main()
{
    int M,N, tight_dom;
    scanf("%d %d",&N,&M);

    if(N==1 && M==1)
        tight_dom=0;
    else if(N==1 && M>1)
        tight_dom=M-1;
    else if(N>1 && M==1)
        tight_dom=N-1;
    else
    {
        tight_dom=N*(M-1);
    }

    printf("%d", tight_dom);
    return 0;
}
