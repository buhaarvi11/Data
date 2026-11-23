//ledder if else
#include<stdio.h>
int main()
{
	int c,com,java,math,py,total;
	float avg;
	
	printf("enter a c marks:=");
	scanf("%d",&c);
	printf("enter a com marks:=");
	scanf("%d",&com);
	printf("enter a java marks:=");
	scanf("%d",&java);
	printf("enter a math marks:=");
	scanf("%d",&math);
	printf("enter a py marks:=");
	scanf("%d",&py);
	
	total= c + com + java + math + py;
	printf("total :=%d\n",total);
	
	avg=total/5;
	printf("average:=%.2f\n",avg);
	
    if(avg>80 && avg<=90)
    {
    	printf("Grade A");
	}
	else if(avg>70 && avg<=80)
    {
    	printf("Grade B");
	}
	else if(avg>60 && avg<=70)
    {
    	printf("Grade C");
	}
	else if(avg>50 && avg<=60)
    {
    	printf("Grade D");
	}
	else if(avg>40 && avg<=50)
    {
    	printf("Grade E");
	}
	else
	{
		printf("Fail");
	}
	return 0;
	
}