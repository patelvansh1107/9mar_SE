#include<stdio.h>
main()
{
	float year,days;
	printf("Enter the value of year : ");
	scanf("%f",&year);
	
	days = year * 365;
	printf("Days = %f",days);

	printf("\nEnter the value of days : ");
	scanf("%f",&days);
		
	year = days / 365;
	printf("Year = %f",year);


		

}
