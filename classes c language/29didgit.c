//program:=29  Count digits in a number
#include<stdio.h>
int main()
{
    int n,count=0;
    
     printf("Enter a number: ");
     scanf("%d\n",&n);
    
    for(;n!=0; n=n/10)
     {
       count++;
	 }
	 
	  printf("Total digits = %d", count);
return 0;
}