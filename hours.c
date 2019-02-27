/*Program to print hours of a day
Author:Dona Maria Sunny
Date:27/2/2019*/

#include<stdio.h>
void main()
	{
		int i,j;
		printf("12 MIDNIGHT");
		printf("\n");	
		for(i=1;i<12;i++)
			{
				printf("%dAM",i);
				printf("\n");
			}
		printf("12 NOON");
		printf("\n");
		for(j=1;j<12;j++)
			{
				printf("%dPM",j);
				printf("\n");
			}
	}
