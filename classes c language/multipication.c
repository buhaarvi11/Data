#include<stdio.h>
int main()
{
	int num;
	printf("enter a number1:=");
	scanf("%d",&num);
	
	int count=1;
	
	while(count<=10)
	{
		int table =num*count;
		printf("%d * %d = %d\n",num,count,table);
		count=count+1;
	}
	return 0;
}
	
	
//	int num1,num2;
//	
//	printf("enter a number1:=");
//	scanf("%d",&num1);
//	printf("enter a number2:=");
//	scanf("%d",&num2);
//	
//	
//	int count=10;
//	
//	while(count>=1)
//	{
//		int table1 =num1*count;
//		int table2 =num2*count;
//		printf("%d * %d = %d\t  %d * %d = %d\n",num1,count,table1,num2,count,table2);
//	
//
//		count=count-1;
//	}
//	
//	
//	return 0;
//}