/* Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. 
Calculate percentage and grade according to following*/
 #include<stdio.h>
 int main()
 {
 	float phy,chem,bio,math,com;
 	float total,Percentage;
 	
 	printf("enter a physics mark:=");
 	scanf("%f",&phy);
 	printf("enter a chemistry mark:=");
 	scanf("%f",&chem);
 	printf("enter a biology mark:=");
 	scanf("%f",&bio);
 	printf("enter a mathematics mark:=");
 	scanf("%f",&math);
 	printf("enter a computer mark:=");
 	scanf("%f",&com);
 	
 	total=phy+chem+bio+math+com;
 	Percentage=total/5;
 	
 	printf("Percentage = %.2f\n",Percentage);
 	
 	if(Percentage >= 40)
 	{
 	  if(Percentage >= 60)
	   {
	   	if(Percentage >= 70)
	   	{
	   		if(Percentage >= 80)
	   		{
	   			if(Percentage >= 90)
	   			{
	   				printf("Grade A");
				}
				else
				{
					printf("Grade B");
				}
			}
			else
			{
				printf("Grade C");
			}
		}
		else
		{
			printf("Grade D");
		}
	}
	else
	{
		printf("Grade E");
	}
}
else
{
	printf("fail");
}
 	return 0;
 }