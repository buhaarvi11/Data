#include<stdio.h>
int main()
{
	int num;
	
	printf("enter a number:=");
	scanf("%d",&num);
	
	if(num%5==0 && num%11==0)
	{
		printf("divisible");
	}
	else
	{
		printf("not divisible");
	}
	
	
	return 0;
}