#include<stdio.h>
#include<string.h>

int main()
{
    char A[5000];
    scanf("%s",A);
    for(int i=0;i<strlen(A);i++)
    {
        if(A[i]!='0' && A[i]!='1')
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}

