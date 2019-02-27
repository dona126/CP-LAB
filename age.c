/*Program to find youngest of three
Author:Dona Maria Sunny
Date:20/2/2019*/

#include<stdio.h>
void main()
	{
		int age1,age2,age3,i;
		
		printf("Enter age of Ram , Shyam and Ajay;");
		scanf("%d%d%d",&age1,&age2,&age3);
		
		if(age1<age2 && age1<age3)
			printf("ram is the youngest");
		if(age2<age1 && age2<age3)
			printf("shyam is the youngest");
		if(age3<age2 && age3<age2)
			printf("ajay is the youngest");
	}
