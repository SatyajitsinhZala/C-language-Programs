#include<stdio.h>
void main()
{
    float h,b,area;
    printf("Enter height of triangle\n");
    scanf("%f",&h);
    printf("Enter breadth of triangle");
    scanf("%f",&b);
    area=(b*h)/2;
    printf("Area= %f",area);
}