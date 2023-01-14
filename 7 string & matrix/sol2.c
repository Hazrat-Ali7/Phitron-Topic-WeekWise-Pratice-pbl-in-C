#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    scanf("%s",str);
    int lenght=strlen(str);
    char rev_str[lenght];

    for(int i=0;i<lenght;i++)
        rev_str[i]=str[lenght-i-1];
    for(int i=0;i<lenght;i++)
    {
        if(str[i]!=rev_str[i])
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}

