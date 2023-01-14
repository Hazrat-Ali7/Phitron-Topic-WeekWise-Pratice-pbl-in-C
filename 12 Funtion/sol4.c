#include<stdio.h>

void input_array(int ara[],int size)
{
    for(int i=0;i<size;i++)
        scanf("%d",&ara[i]);
}

void sort_print(int ara[],int size)
{
    for(int i=0;i<size;i++)
    {
        while(ara[i]--)
            printf("%d ",i);
    }

}
int get_max(int ara[],int size)
{
    int max=ara[0];
    for(int i=1;i<size;i++)
        {
            if(ara[i]>max)
                max=ara[i];
        }
        return max;
}
void intialize_with_zero(int ara[], int size)
{
    for(int i=0;i<size;i++)
        ara[i]=0;
}

void add_frequency(int freq[], int ara[], int size)
{
    for(int i=0;i<size;i++)
        freq[ara[i]]++;
}

int main(void)
{
    int total_num;
    scanf("%d",&total_num);


    int numbers[total_num];
    input_array(numbers, total_num);


    int maxx=get_max(numbers,total_num);


    int frequency_array[maxx+1];
    intialize_with_zero(frequency_array,maxx+1);


    add_frequency(frequency_array,numbers,total_num);


    sort_print(frequency_array, maxx+1);

}
