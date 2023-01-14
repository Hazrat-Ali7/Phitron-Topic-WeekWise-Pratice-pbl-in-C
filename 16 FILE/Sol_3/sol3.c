#include<stdio.h>

FILE *input_file;
FILE *output_file;

void solve();

int main(void)
{
    input_file = fopen("input.txt","r");
    output_file = fopen("output.txt","w");

    if(input_file==NULL)
    {
        fprintf(output_file,"Input file not found...");
        return 0;
    }

    int t;
    fscanf(input_file,"%d",&t);

    while(t--)
        solve();


    fclose(input_file);
    fclose(output_file);
    return 0;
}

void solve()
{
    int n;
    fscanf(input_file,"%d",&n);

    if(n<0)
    {
        for(int i=n;i<=-n;i++)
            fprintf(output_file,"%d ",i);
    }
    else
    {
        for(int i=n;i>=-n;i--)
            fprintf(output_file,"%d ",i);
    }
    fprintf(output_file,"\n");
}
