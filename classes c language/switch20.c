#include<stdio.h>
int main()
{
	int a,b,ch;
	
	printf("enter a number:=");
	scanf("%d",&a);
	printf("enter b number:=");
	scanf("%d",&b);
	printf("enter a choice:=");
	scanf("%d",&ch);
	
	
	switch(ch)
	{
		case 1:
			printf("%d",a+b);
		break;
			
		case 2:
			printf("%d",a-b);
		break;
			
		case 3:
			printf("%d",a*b);
		break;
			
		case 4:
			printf("%d",a/b);
		break;
			
		default:
			printf("invalid");
	}
	return 0;
}