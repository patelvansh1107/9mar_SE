#include<stdio.h>
main()
{
	int i,num;
	
	printf("Enter the value of num : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i=i+2){
		printf("\n%d",i);
	}
}
