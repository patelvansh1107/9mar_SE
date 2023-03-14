#include<stdio.h>
main()
{
	float h,b,a;
	
	printf("Enter the value of h : ");
	scanf("%f",&h);
	printf("Enter the value of b : ");
	scanf("%f",&b);
	
	a = 0.5 * h * b;
	
	printf("Area of triangle is : %f",a);
}
