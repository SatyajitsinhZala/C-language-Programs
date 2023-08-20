#include<stdio.h>
void main()
{
    float s,m,h;
    printf("Enter seconds\n");
    scanf("%f",&s);
    h=s/3600;
    m=60/s;
    printf("%f:%f:%f",h,m,s);
}