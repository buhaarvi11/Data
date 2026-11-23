#include<stdio.h>
int main()
{
	int age;
	
	printf("enter a age:=");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("voting eligibility");
	}
	else
	{
		printf("not eligibile");
	}
	
	return 0;
}