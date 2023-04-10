#include<stdio.h>
main()
{
//	datatype declaration
	int i,sum,num;
	
//	take input from user
	printf("Enter the value of num : ");
	scanf("%d",&num);
	
//	for loop declaration
	for(i=0;i<=num;i+=2){
//		ffunction declaration
		sum += i;
		printf("Sum = %d\n",sum);
	}
}
