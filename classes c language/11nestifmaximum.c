#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("enter a number:=");
	scanf("%d",&a);
	printf("enter a number:=");
	scanf("%d",&b);
	printf("enter a number:=");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("A is max");
		}
		else
		{
			printf("C is max");
		}
	}
		else
		{
			if(b>c)
			{
				printf("B is max");
			}
		else
			printf("C is max");
		}
	return 0;
}