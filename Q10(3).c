#include<stdio.h>
main()
{
//	datatype declaration
	int i,num;
	
//	take input from user
	printf("Enter the value of num : ");
	scanf("%d",&num);
	
//	for loop declaration
	for(i=0;i<=num;i=i+2){
		printf("\n%d",i);
	}
}
