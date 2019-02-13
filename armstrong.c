/*Program to check whether a number is an armstrong number 
Author:Dona Maria Sunny
Date:13/02/2019*/

#include<stdio.h>
void main()
	{  
		int number,reminder,cube=0,copy;
		printf("Enter number:");
		scanf("%d",&number);
		copy=number;
		while(number>0)
			{
				reminder=number%10;
				cube=cube+(reminder*reminder*reminder);
				number=number/10;	
			}
		if(cube==copy)
			{
				printf("%d is an armstrong number",copy);
			}
		else
				printf("%d is not an armstrong number",copy);
	}
