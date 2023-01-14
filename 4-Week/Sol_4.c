#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    for(int i=1;i<=n;i++)
    {
        if(i%m==0){
            printf("%d ",i);
        }
    }

    return main();
}

