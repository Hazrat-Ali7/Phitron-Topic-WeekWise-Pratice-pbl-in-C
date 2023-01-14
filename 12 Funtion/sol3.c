#include<stdio.h>
#include<string.h>

void add_string(int word);

void main()
{
    int t;
    scanf("%d ",&t);
    add_string(t);
}

void add_string(int word)
{
    int i=0,j=0;
    char A[5000];
    for(int p=0;p<word;p++)
    {
        char x[5000];
        scanf("%s",x);
        int len=strlen(x);
        for( i=0;i<=strlen(x);i++)
        {
            A[j]=x[i];
            j++;
            if(x[i]=='\0')
                A[j-1]=' ';
                A[j]='\0';
        }
    }
    printf("%s\n",A);
}
