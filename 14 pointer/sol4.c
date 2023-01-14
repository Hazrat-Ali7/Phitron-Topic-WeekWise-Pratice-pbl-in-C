#include<stdio.h>
const double pi=3.1416;

void area_calc(double *ptr,double r);

int main(void)
{
    double radius,area;
    scanf("%lf",&radius);

    area_calc(&area,radius);

    printf("%lf",area);
    return 0;
}
void area_calc(double *ptr,double r)
{
    *ptr=pi*r*r;
}
