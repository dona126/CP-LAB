/*Program to find greatest of three numbers
Author:Dona Maria Sunny
Date:06/02/2019*/

#include<stdio.h>
void main()
	{
		int number1,number2,number3,big;
		printf("Enter three intergers number1,number2 and number3");
		scanf("%d%d%d",&number1,&number2,&number3);
		big=number1;
		if(number2>big)
			{
				big=number2;
			}
		if(number3>big)
			{
				big=number3;
			}
		printf("%d is the greatest number",big);
	}
			


		
