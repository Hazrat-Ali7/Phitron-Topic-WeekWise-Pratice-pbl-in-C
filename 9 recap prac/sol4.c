#include<stdio.h>
#include<string.h>

int main()
{
    char text[300];
    scanf("%s",&text);

    printf("%c",text[0]);
    for(int i=1;i<strlen(text);i++)
    {
        if(text[i]!=text[i-1])
            printf("%c",text[i]);
    }
    return 0;
}

