#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool is_binary(char check[]);

void main()
{
    char A[1000];
    scanf("%s",A);
    if(is_binary(A))
        printf("YES");
    else
        printf("NO");
}

bool is_binary(char check[])
{
    for(int i=0;i<strlen(check);i++)
    {
        if(check[i]!='0'&& check[i]!= '1')
            return false;
    }
    return true;
}
