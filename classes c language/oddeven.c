//odd even
#include<stdio.h>
int main()
{
	int num;
	
	printf("enter a numbr:=");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("even");
	}
	else{
		printf("odd");
	}
	
	
	return 0;
}