#include<stdio.h>
int main()
{
	int n;
	
	printf("enter a number:=");
	scanf("%d",&n);
	
	
	switch(n>0?1:n<0?2:3)
	{
		case 1:
			printf("positive");
		break;
		
		case 2:
			printf("negative");
		break;
		
		case 3:
			printf("zero");
		break;	
	}
	return 0;
}