#include<stdio.h>
int main()
{
	
	int math,phy,chem,total;
	
	printf("enter a maths marks:=");
	scanf("%d",&math);
	printf("enter a physics marks:=");
	scanf("%d",&phy);
	printf("enter a chemestry marks:=");
	scanf("%d",&chem);
	total=math+phy+chem;
	
	if((math>=65 && phy>=55 && chem>=50 && total>=190)|| (math+phy>=140))
	{
		printf("eligible");
	}
	else
	{
		printf("not eligible");
	}
	
	return 0;
}