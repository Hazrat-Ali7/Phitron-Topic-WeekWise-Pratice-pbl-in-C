
#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);


    if(n<m){
        for(int i=n;i<=m;i++)
        {
          printf("%d ",i);
        }
    }
    else
    {
        for(int i=n;i<24;i++)
            {
            printf("%d ",i);
            }
        for(int i=0;i<=m;i++)
        {
          printf("%d ",i);
        }
    }





    return main();
}
