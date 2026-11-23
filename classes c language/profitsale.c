#include<stdio.h>
int main()
{
	int pur,sal;
	
	printf("enter a purchase:=");
	scanf("%d",&pur);
	
	printf("enter a sale:=");
	scanf("%d",&sal);
	
	if(sal>pur)
	{
		printf("profit");
	}
	else
	{
		printf("lose");
	}
	

	
	
	
	
	return 0;
}