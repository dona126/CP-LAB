/*Program to find whether area of rectangle greater than perimeter 
Author:Dona Maria Sunny
Date:20/2/2019*/

#include<stdio.h>
void main()
	{
		float length,breadth,area,perimeter;
		printf("Enter length and breadth of rectangle;");
		scanf("%f%f",&length,&breadth);
		area=length*breadth;
		perimeter=2*(length+breadth);
		if(area>perimeter)
			{
				printf("Area of rectangle is greater than perimeter");
			}
		else
			{
				printf("Area of rectangle is not greater than perimeter");
			}
	}

