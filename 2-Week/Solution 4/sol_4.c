#include<stdio.h>

int main ()
{
    int grade;
    scanf("%d", &grade);

    if(grade>=0 && grade<=32)
        printf("F");
    else if(grade>=33 && grade<=39)
        printf("D");
    else if(grade>=40 && grade<=49)
        printf("C");
    else if(grade>=50 && grade<=59)
        printf("B");
    else if(grade>=60 && grade<=69)
        printf("A-");
    else if(grade>=70 && grade<=79)
        printf("A");
    else if(grade>=80 && grade<=100)
        printf("A+");
    else
        printf("Invalid Number.");
    return 0;
}
