#include<stdio.h>

int main()
{
    int A, B, C;
    printf("Enter three number: ");
    scanf("%d %d %d", &A, &B, &C);

    if(A==B && A==C)
        printf("They are equal.");
    else if( A>B && A>C)
        printf("A is bigger.");
    else if(B>A && B>C)
        printf("B is bigger.");
    else if (C>A && C>B)
        printf("C is bigger.");
    else if (A>C && A==B)
        printf("A and B both are bigger");
    else if (A>B && A==C)
        printf("A and C both are bigger");
    else
        printf("B and C both are bigger");
    return 0;
}
