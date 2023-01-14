#include<stdio.h>

void change_char(char A[]);

int main(void)
{
    char text[1000];
    scanf("%s",text);
    change_char(text);

    printf("%s",text);
    return 0;
}
void change_char(char A[])
{
    for(int i=0; A[i]!='\0'; i++)
        if(A[i]%2==0)
            A[i]-=32;
}
