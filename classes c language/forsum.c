//sum of all number 1 to 100
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	for(int i = 1;i <=10; i++)
//	{
//	    sum = sum + i;
//	}
//	printf("sum:%d",sum);
//	
//	
//	return 0;
//}

//even number sum
#include<stdio.h>
int main()
{
	int sum=0;
	for(int i=2;i<=100;i+=2)
	{
		sum += i;
	}
	 printf("Sum: %d", sum);
	
	return 0;
}