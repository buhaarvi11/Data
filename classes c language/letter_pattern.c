//letters of pattern

//            *
//          *   * 
//        * * * * *
//      *           *
//    *               *

//#include<stdio.h>
//int main()
//{
//	int i,j;
//
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=9;j++)
//		{
//			if((i+j==6)||(j-i==4)||(i==3 && j>3 && j<7))
//			{
//				printf("* ");
//			}
//			else
//			{
//				printf("  ");
//			}
//
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}



//
//  *       *
//    *   *
//      *
//    *   *
//  *       *


//#include<stdio.h>
//int main()
//{
//	int i,j;
//	
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if((i==j)||(i+j==6))
//			{
//				printf("* ");
//			}
//			else
//			{
//				printf("  ");
//			}
//		
//		}
//		printf("\n");
//	}
//	return 0;
//}



//  * * * * 
//  *     * 
//  * * * * 
//  *
//  *

//#include<stdio.h>
//int main()
//{
//	int i,j;
//	
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=4;j++)
//		{
//			if((j==1)||(i==1)||(i==3 )||( i<=3 && j==4))
//			{
//				printf("* ");
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}





//  * * * * 
//  *     * 
//  * * * * 
//  *  * 
//  *    *

//#include<stdio.h>
//int main()
//{
//	int i,j;
//	
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=4;j++)
//		{
//			if((j==1)||(i==1)||(i==3)||(i<=3 && j==4||i-j==1))
//			{
//				printf("* ");
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//    }
//	return 0;
//}





// *       *
//   *   *
//     *


//#include<stdio.h>
//int main()
//{
//	int i,j;
//
//	for(i=1;i<=3;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if((i==j)||(i+j==6))
//			{
//				printf("* ");
//			}
//			else
//			{
//				printf("  ");
//			}
//  
//		}
//		printf("\n");
//	}
//	return 0;
//}





//*       *
//* *   * *
//*   *   *
//*       *
//*       *

//#include<stdio.h>
//int main()
//{
//	int i,j;
//
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if((j==1)||(j==5)||(i==j && i<=3)||(i+j==6 && i<=3))
//			{
//				printf("* ");
//			}
//			else
//			{
//				printf("  ");
//			}
//
//		}
//		printf("\n");
//	}
//	return 0;
//}





//  * * *
//    *
//	  *
//	  *
//	* * *

//#include<stdio.h>
//int main()
//{
//	int i,j;
//
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=3;j++)
//		{
//			if((i==1)||(i==5)||(j==2))
//			{
//				printf("* ");
//			}
//			else
//			{
//				printf("  ");
//			}
//	
//		}
//		printf("\n");
//	}
//	return 0;
//}




//*       *
//* *     *
//*   *   *
//*     * *
//*       *

#include<stdio.h>
int main()
{
	int i,j;

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((j==1)||(j==5)||(j==i))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}

		}
		printf("\n");
	}
	return 0;
}







