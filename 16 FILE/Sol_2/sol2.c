#include<stdio.h>

int main(void)
{
    FILE *input_file;
    FILE *output_file;

    input_file = fopen("input.txt","r");
    output_file = fopen("output.txt","w");

    if(input_file==NULL)
    {
        fprintf(output_file,"Input file not found...");
        return 0;
    }

    int n;
    fscanf(input_file,"%d",&n);

    for(int i=1;i<=n;i++)
        fprintf(output_file,"%d ",i);


    fclose(input_file);
    fclose(output_file);
    return 0;
}
