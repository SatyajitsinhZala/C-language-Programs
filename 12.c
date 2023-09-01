#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("enter 1 variable");
	scanf("%d",&a);
	printf("enter 2 variable");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d %d",a,b);
}
