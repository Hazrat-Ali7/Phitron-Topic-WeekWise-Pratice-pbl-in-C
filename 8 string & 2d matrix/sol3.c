#include<stdio.h>
#include<string.h>

int main()
{
    char A[5000];
    scanf("%s",A);
    int cost=0,power=0;
    for(int i=0;i<strlen(A);i++)
    {
        cost+=A[i]-'a'+1;
    }
    while(cost!=1)
    {
        if(cost%2!=0)
        {
            power=0;
            break;
        }
        cost/=2;
        power++;
    }
    if(power>0)
    {
        printf("YES\n2^%d",power);
    }
    else
        printf("NO\n");
    return 0;
}


