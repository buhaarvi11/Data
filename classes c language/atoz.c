#include<stdio.h>
int main()
{
	char ch='A';
	
	while(ch<='Z')
	{
		printf("%c\t",ch);
		ch=ch+1;
	}
	return 0;
}