/*Program to print inverted half pyramid with *
Author:Dona Maria Sunny
Date:27/2/2019*/

#include<stdio.h>
void main()
	{
		int i,j;
		for(i=1;i<=5;i++)
			{
				for(j=5;j>=i;j--)
					{
						printf("*\t");
					}
				printf("\n");
			}
	}
