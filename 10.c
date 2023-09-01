#include<stdio.h>
void main()
{
	int y,d,w;
	printf("Enter no of days");
	scanf("%d",&d);
	y=d/365;
	d=d%365;
	w=d/7;
	d=d%7;
	printf("%d,%d,%d",y,d,w);	
	
}
