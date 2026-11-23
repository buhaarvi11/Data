#include<stdio.h>
int main()
{
	
	int i,j;

//17) number of pattern in pdf	
//	1
//	2 2
//	3 3 3
//	4 4 4 4
//	5 5 5 5 5


//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d ",i);
//		}
//		printf("\n");
//	}
	
//	#
//	@ #
//	# @ #
//	@ # @ #
//	# @ # @ #
	for(i=5;i>=1;i--)
  {
  	for(j=i;j<=i;j++)
  	{
  		printf("#",j);
	  }
	  
	  printf("\n");
}
	return 0;
}