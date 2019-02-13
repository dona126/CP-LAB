/*Program to find reverse of a number
Author:Dona Maria Sunny
Date:13/02/2019*/

#include<stdio.h>
void main()
	{ 
		int number,reminder,reverse=0,copy;
		printf("Enter number:");
		scanf("%d",&number);
		copy=number;
		while(number>0)
			{
				reminder=number%10;
				reverse=reverse*10+reminder;
				number=number/10;	
			}
		printf("Reverse of %d is %d",copy,reverse);
	}
