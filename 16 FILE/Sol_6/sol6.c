#include<stdio.h>
#include<stdbool.h>

FILE *input_file;
FILE *output_file;

bool ly(int n);

int main(void)
{
    input_file = fopen("input.txt","r");
    output_file = fopen("output.txt","a");

    if(input_file == NULL)
    {
        fprintf(output_file,"Input file not found...");
        return 0;
    }

    int year;

    fscanf(input_file,"%d",&year);

    if(ly(year))
        fprintf(output_file,"%d --> YES\n",year);
    else
        fprintf(output_file,"%d --> NO\n",year);

    fclose(input_file);
    fclose(output_file);
    return 0;
}

bool ly(int n)
{
    if(n%400==0)   return true;
    else if(n%4==0 && n%100!=0) return true;
    return false;
}
