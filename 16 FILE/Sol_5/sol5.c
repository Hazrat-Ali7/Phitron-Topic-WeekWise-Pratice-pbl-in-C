#include<stdio.h>

FILE *input_file;
FILE *output_file;

int main(void)
{
    input_file = fopen("input.txt","r");
    output_file = fopen("output.txt","w");

    if(input_file == NULL)
    {
        fprintf(output_file,"Input file not found...");
        return 0;
    }

    int n;
    fscanf(input_file,"%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<n;j++)
            fprintf(output_file," ");

        for(int j=1;j<=n;j++)
            fprintf(output_file,"#");

        fprintf(output_file,"\n");
    }

    fclose(input_file);
    fclose(output_file);
    return 0;
}
