#include<stdio.h>
#include<string.h>

int main()
{
    char text[1000];
    scanf("%s",text);

    int lenght=strlen(text);
    int frequency[27];

    for(int i=0; i<27; i++)
        frequency[i]=0;

    for(int i=0; i<lenght; i++)
        frequency[text[i]-96]++;


    int total_char=0;
    for(int i=0; i<27; i++)
    {
        if(frequency[i]>0)
            total_char++;
    }

    while(total_char--)
    {
        int max_char=-1,index;
        char alphabet=-1;
        for(int i=0; i<27; i++)
        {
            if(frequency[i]>max_char)
            {
                max_char=frequency[i];
                alphabet=96+i;
                index=i;
            }
        }
        while(max_char!=0)
        {
            printf("%c",alphabet);
            max_char--;
        }
        frequency[index]=0;
    }

    return 0;
}

