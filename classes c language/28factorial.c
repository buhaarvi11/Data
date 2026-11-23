//program no:=28 factorial of a number. 
#include<stdio.h>
int main()
{
	
	//for loop
	int i,n,fact=1;
	
	printf("enter a number:=");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);


   //while loop
//    int i=1,n,fact=1;
//
//	printf("enter a number:=");
//	scanf("%d",&n);
//	while(i<=n)
//	{
//		fact=fact*i;
//		i++;
//	}
//	printf("%d",fact);
	
	
	//do while loop
   /* int i=1,n,fact=1;
	
	printf("enter a number:=");
	scanf("%d",&n);
	do
	{
		fact=fact*i;
		i++;
	}
	while(i<=n);

	printf("%d",fact);
	*/
  	return 0;
}   

	
	
	
	
	
	
	
	