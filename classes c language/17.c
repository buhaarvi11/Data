#include<stdio.h>
int main()
{
	int bs,hra,da;
	float ansHra,ansDa,total;
	
	
	printf("enter basic salary:=");
	scanf("%d",&bs);
	
	if(bs <= 10000)
	{
		ansHra=bs*20/100;
		ansDa=bs*80/100;
		total=ansHra+ansDa;
		printf("total:=%2f\n",bs+total);
	}
	
    else if(bs <= 20000)
	{
		ansHra=bs*25/100;
		ansDa=bs*90/100;
		total=ansHra+ansDa;
		printf("total:=%2f\n",bs+total);
	}
	
	else
	{
		ansHra=bs*30/100;
		ansDa=bs*95/100;
		total=ansHra+ansDa;
		printf("total:=%2f\n",bs+total);
	}
	
	
	return 0;
}