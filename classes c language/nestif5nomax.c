//maximum 5 number
#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	
	printf("enter a number:=");
	scanf("%d",&a);
	printf("enter a number:=");
	scanf("%d",&b);
	printf("enter a number:=");
	scanf("%d",&c);
	printf("enter a number:=");
	scanf("%d",&d);
	printf("enter a number:=");
	scanf("%d",&e);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					printf("A is max");
				}
				else
				{
					printf("E is max");
				}
			}
				else
				{
					if(d>e)
					{
					   printf("D is max");
				    } 
				    else
				    {
				 	  printf("E is max");
			    	}
				}
			}
	else
		{
			if(c>d)
				{
					if(c>e)
						{
						   printf("C is max");
					    }
					    else
					    {
					    	printf("E is max");
						}
				}
					else
					{
						if(d>e)
						{
							printf("D is max");
						}
						else
						{
							printf("E is max");
						}
					}
		}
	}
		        else
			    {
				    if(b>c)
				    {
					if(b>d)
					    {
						if(b>e)
						   {
							   printf("B is max");
						   }
  							else
  							{
							   printf("E is max");
					    	}
					    }
						else
						{
							if(d>e)
							{
								printf("D is max");
							}
							else
							{
							    printf("E is max");
						    }
						}
					}
					else
					{
						if(c>d)
						{
							if(c>e)
							{
								printf("C is max");
							}
							else
							{
								printf("E is max");
							}
						}
							else
						{
							if(d>e)
							{
								printf("D is max");
							}
							     else
						    	{
							        printf("E is max");
						        }
							
						}	
				    }
				}

return 0;	
}
	