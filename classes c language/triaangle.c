//triangle or not
int main()
#include<stdio.h>
{
	int a,b,c;
	
	printf("enter a number:=");
	scanf("%d",&a);
	printf("enter a number:=");
	scanf("%d",&b);
	printf("enter a number:=");
	scanf("%d",&c);
	
	
	if((a+b+c)==180)
	{
		printf("valid triangle");
	}
	else
	{
		printf("invalid triangle");
	}
	return 0;
}