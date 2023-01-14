#include<stdio.h>

int main(){
    int num1, num2, summation, subtraction, multiplication;

    scanf("%d %d", &num1, &num2);

    summation= num1+num2;
    subtraction= num1-num2;
    multiplication= num1*num2;

    printf("%d %d %d", summation, subtraction, multiplication);


    return 0;
}
