#include<stdio.h>
main()
{
	int i,sum,num;
	
	printf("Enter the value of num : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i+=2){
		sum += i;
		printf("Sum = %d\n",sum);
	}
}
