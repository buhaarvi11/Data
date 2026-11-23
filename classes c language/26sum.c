//rogram no:=26   sum of numbers from 1 to n

#include<stdio.h>
int main()
{
	//for loop
//	int i,sum = 0,n;
//	
//	printf("enter a number:=");
//	scanf("%d",&n);
//	
//	for(i = 1 ; i <= n ; i ++)
//	{
//	  sum = sum + i;
//    }
//    printf("%d\n",sum);
//    


//while loop

//int i=1,sum=0,n;
//    printf("enter a number:=");
//	scanf("%d",&n);
//while(i <=n)
//{
//    sum=sum+i;
//    i++;
//}
//   printf("%d\n",sum);


//do while loop

int i=1,sum=0,n;

    printf("enter a number:=");
	scanf("%d",&n);
 do
  {
    sum=sum+i;
    i++;
  }
 while(i<=n);
     printf("%d",sum);
 return 0;
}
