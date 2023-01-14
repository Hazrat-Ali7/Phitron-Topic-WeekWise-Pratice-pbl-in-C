#include<stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    if( A>B )
    {
        printf("A is bigger.");
    }
    else if(B>A)
    {
        printf("B is bigger.");
    }
    else {
        printf("They are equal.");
    }
    return 0;
}
