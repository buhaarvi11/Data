#include<stdio.h>
int main()
{
	int a,b;
	
	printf("enter a number:=");
	scanf("%d",&a);
	printf("enter b number:=");
	scanf("%d",&b);
	
	switch(a>b?1:b>a?2:3)
	{
		case 1:
			printf("A is max");
		break;
		
		case 2:
			printf("B is max");
		break;
		
		case 3:
			printf("both are same");
		break;
	}

	return 0;
}