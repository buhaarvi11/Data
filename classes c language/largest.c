#include<stdio.h>
int main()
{
	int a,b;
	
	printf("enter a number:=");
	scanf("%d",&a);
	printf("enter a number:=");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("a is max");
	}
	else
	{
		printf("b is max");
	}
	
	
	return 0;
}