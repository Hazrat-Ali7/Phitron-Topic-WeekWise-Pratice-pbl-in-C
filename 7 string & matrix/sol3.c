#include<stdio.h>
#include<string.h>

int main()
{
    char text[1000];
    fgets(text,1000,stdin);
    int vowel=0,consonant=0;
    int lenght=strlen(text);

    for(int i=0;i<lenght;i++)
    {
        if((text[i]>=65 && text[i]<=90)||(text[i]>=97 && text[i]<=122))
        {
            if(text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u'||text[i]=='A'||text[i]=='E'||text[i]=='I'||text[i]=='O'||text[i]=='U')
                vowel++;
            else
                consonant++;
        }
    }
    printf("Vowel - %d\nConsonant - %d\n",vowel,consonant);
    return 0;
}

