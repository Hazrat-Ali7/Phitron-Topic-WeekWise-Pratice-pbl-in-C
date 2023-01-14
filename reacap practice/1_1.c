#include<stdio.h>

int main()
{
    int numerator,denominator;
    printf("Input numerator: ");
    scanf("%d",&numerator);
    printf("Input denominator: ");
    scanf("%d",&denominator);

    printf("quotient= %d, remainder= %d\n",numerator/denominator,numerator%denominator);
}
