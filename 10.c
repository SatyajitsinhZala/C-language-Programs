#include<stdio.h>
void main()
{
    int y,w,d;
    printf("Enter no of Days\n");
    scanf("%d",&d);
    y=d/365;
    w=d/7;
    printf("%d,%d,%d",y,w,d);
}