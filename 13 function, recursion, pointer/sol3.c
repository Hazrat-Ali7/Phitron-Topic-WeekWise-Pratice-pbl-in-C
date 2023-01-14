#include<stdio.h>
#include<string.h>

int calc_cost(char A[]);
int calc_power(int n);

int main(void)
{
    char text[1000];
    scanf("%s",text);

    int cost=calc_cost(text);

    int power=calc_power(cost);
    if(power)
        printf("YES\ncost = 2^%d",power);
    else
        printf("NO\n");
    return 0;
}
int calc_cost(char A[])
{
    int cost=0;
    for(int i=0; i<strlen(A); i++)
        cost+=A[i]-96;
    return cost;
}
int calc_power(int n)
{
    int p=0,checker=1;
    while(checker<n)
    {
        p++;
        checker*=2;
    }
    if(checker==n)
        return p;
    return 0;
}
