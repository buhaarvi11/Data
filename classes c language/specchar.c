#include<stdio.h>
int main()
{
	int ch;
	
	printf("enter a character:=");
	scanf("%c",&ch);
	
	if((ch >='A' && ch <='Z')||(ch >='a' && ch <='z'))	
	{
		printf("alphabet");
	}
	
	  else
	 {
		if(ch>='0'||ch>='9')
		{
			printf("digit");
		}
		else
		{
			printf("special characters");
		}
	}
	return 0;
}