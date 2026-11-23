#include<stdio.h>
int main()
{
	int i,j;
	
//1)number pattern in pdf	
//	* * *
//	* * *
//	* * *


//	for(i=1;i<=3;i++)
//	{
//		for(j=1;j<=3;j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}


//4)number of pattern in pdf	
//	* * * * *
//	* * * *
//	* * *
//	* *
//	*


//		for(i=1;i<=5;i++)
//	{
//		for(j=5;j>=i;j--)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
	
	
 2)number pattern in pdf	
	*
	* *
	* * *
	* * * *
	* * * * *
	
		for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	

	return 0;
}