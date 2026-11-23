//armstrong
#include<stdio.h>
int main()
{
	int n,a,b,sum=0;
	
	printf("enter a number:=");
	scanf("%d",&n);
	
	a = n;
	
	while(n >0)
	{
		b = n % 10;
		sum = sum + b * b * b;
		n = n / 10;
	}
	if(sum == 0)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not armstrong");
    }
	return 0;
}