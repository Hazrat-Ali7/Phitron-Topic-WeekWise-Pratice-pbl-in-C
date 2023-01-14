#include<stdio.h>

FILE *input_file;
FILE *output_file;


int main(void)
{
    input_file = fopen("input.txt","r");
    output_file = fopen("output.txt","w");

    if(input_file==NULL)
    {
        fprintf(output_file,"Input file not found...");
        return 0;
    }

    int n,x,sum=0;
    fscanf(input_file,"%d",&n);

    for(int i=0;i<n;i++)
    {
        fscanf(input_file,"%d",&x);
        sum+=(x%10);
    }

    fprintf(output_file,"Sum = %d",sum);

    fclose(input_file);
    fclose(output_file);
    return 0;
}
