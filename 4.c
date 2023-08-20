#include<stdio.h>
void main()
{
    float a,b,c,avg;
    printf("Enter 1 number1\n");
    scanf("%f",&a);
    printf("Enter 2 number\n");
    scanf("%f",&b);
    printf("Enter 3 number\n");
    scanf("%f",&c);
    avg=(a+b+c)/3;
    printf("Avg= %f",avg);
}