/*Program to find greatest of two numbers
Author:Dona Maria Sunny
Date:06/02/2019*/
#include<stdio.h>
void main()
	{
		int number1,number2;
		printf("Enter two intergers number1 and number2");
		scanf("%d%d",&number1,&number2);
		if(number1>number2)
                /*to check which number is greater*/
			{
				printf("%d is greater than %d",number1,number2);
			}
		else
			{
				printf("%d is greater than %d",number2,number1);
			}
	}
