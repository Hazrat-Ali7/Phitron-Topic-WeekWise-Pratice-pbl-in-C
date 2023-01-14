#include<stdio.h>

int main()
{
    int hour,min;
    printf("Input hours: ");
    scanf("%d",&hour);
    printf("Input minutes: ");
    scanf("%d",&min);

    printf("Total: %d minutes.\n",hour*60+min);
}
