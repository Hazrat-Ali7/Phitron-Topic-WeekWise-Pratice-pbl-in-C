#include<stdio.h>

int main()
{
    float width,height;
    printf("Input the height of the Rectangle : ");
    scanf("%f",&height);
    printf("Input the width of the Rectangle : ");
    scanf("%f",&width);

    printf("Perimeter of the Rectangle is : %f\n",2*(width+height));
}
