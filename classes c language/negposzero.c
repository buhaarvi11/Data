#include<stdio.h>
int main()
{
	int num;
	printf("enter a number:=");
	scanf("%d",&num);
	
	if(num>=0)
	{
		if(num==0)
		{
			printf("number is zero");
		}
		else
		{
			printf("number is positive");
		}
	}
     else
     {
     	printf("number is negative");
	 }
	 return 0;
}