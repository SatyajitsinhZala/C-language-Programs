#include<stdio.h>
void main()
{
    float p,r,t,i;
    printf("Enter principal amounth\n");
    scanf("%f",&p);
    printf("Enter rate\n");
    scanf("%f",&r);
    printf("Enter Time\n");
    scanf("%f",&t);
    i=(p*r*t)/100;
    printf("Interest=%f",i);
}