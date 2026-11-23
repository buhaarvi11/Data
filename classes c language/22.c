#include<stdio.h>
int main()
{
	int n;
	
	printf("enter a number:=");
	scanf("%d",&n);
	
	switch(n%2)
	{
	    case 0:
	     	printf("even");
	    break;
	    
	    case 1:
	    	printf("odd");
	    break;
    }
	return 0;
}