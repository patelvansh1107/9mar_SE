#include<stdio.h>
main()
{
	float a,p,r,t;
	
	printf("Enter the value of p : ");
	scanf("%f",&p);
	printf("Enter the value of r : ");
	scanf("%f",&r);
	printf("Enter the value of t : ");
	scanf("%f",&t);
	
	a = (p * r * t)/100;
	
	printf("The total value is : %f",a);
	
}
