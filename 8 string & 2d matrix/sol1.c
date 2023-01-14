#include<stdio.h>
#include<string.h>

int main()
{
    int word,j=0,i;
    scanf("%d",&word);
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
    printf("%s",A);
    return 0;
}
