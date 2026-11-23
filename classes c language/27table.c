//program no:=27 multiplication table of a number.

#include<stdio.h>
int main()
{
  //for loop
//int i,n;
//
//  printf("enter a number:=");
//	scanf("%d",&n);
//	
//    for(i=1;i<=10;i++)
//     {
//        printf("%d * %d = %d\n",n,i,n*i);
//     }

  //while loop
  
//  int i=1,n;
//
//    printf("enter a number:=");
//	scanf("%d",&n);
//	
//	while(i<=10)
//     {
//       printf("%d * %d = %d\n",n,i,n*i);
//       i++;
//     }
     
    //do while loop
    int i=1,n;

    printf("enter a number:=");
	scanf("%d",&n);
	do
	{
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}
	while(i<=10);
	
	return 0;
}