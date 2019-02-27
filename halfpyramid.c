/*Program to print half pyramid with numbers
Author:Dona Maria Sunny
Date:27/2/2019*/

#include<stdio.h>
void main()
	{
		int i,j;
		for(i=1;i<=5;i++)
			{
				for(j=1;j<=i;j++)
					{
						printf("%d\t",j);
					}
				printf("\n");
			}
	}
