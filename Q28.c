#include<stdio.h>
union employee 
{
	int employee_id;
	char name[20];
	float salary;
}
main()
{
	union employee p;
	
	printf("Enter the id = ");
	scanf("%d",&p.employee_id);
	printf("id = %d",p.employee_id);
	
	printf("\nEnter the name = ");
	scanf("%s",&p.name);
	printf("Name = %s",p.name);
	
	printf("\nEnter the Salary = ");
	scanf("%f",&p.salary);
	printf("Salary = %f",p.salary);

//	Difference between the structure and union is the structure has total bytes value is 28, but the unoin has one
//	one datatype that has max 20 bytes and other datatype has no limit.
}
