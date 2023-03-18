#include<stdio.h>
main()
{
	int num;
	printf("Enter the value of num : ");
	scanf("%d",&num);
	
	(num%2==0) ? printf("This is a even number") : printf("This is a odd number");
}
