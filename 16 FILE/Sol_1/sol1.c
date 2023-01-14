#include<stdio.h>

int main(void)
{
    FILE *input_file;
    FILE *output_file;

    input_file= fopen("input.txt","r");
    output_file= fopen("output.txt","w");


    if(input_file==NULL)
    {
        fprintf(output_file,"Input file not found...");
        return 0;
    }

    while(1)
    {
        char x = fgetc(input_file);
        if(x==EOF)
            break;

        fprintf(output_file,"%c",x);
    }




    fclose(input_file);
    fclose(output_file);
    return 0;
}
