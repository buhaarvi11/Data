#include<stdio.h>
int main()
{
	int a,b,c,d;
	
	printf("enter a number:=");
	scanf("%d",&a);
	printf("enter a number:=");
	scanf("%d",&b);
	printf("enter a number:=");
	scanf("%d",&c);
	printf("enter a number:=");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
			    printf("A is max");
		    }
		    else
	        	{
		          printf("D is max");
	        	}
     	}
     	else
        {
     		if(c>d)
		    {
	           printf("C is max");
		    }
		else
		{
			printf("D is max");
		}
	}
}
	  else
	  {
	  	if(b>c)
	  	{
	  		if(b>d)
	  		{
	  			printf("B is max");
			}
			  else
			  {
			  	printf("d is max");
			  }
		  }
	  else
	  {
	  	if(c>d)
	  	{
	  		printf("C is max");
	    }
	    else
	    {
	    	printf("D is max");
		}
	  }
}
	
return 0;	
}