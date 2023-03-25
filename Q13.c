#include<stdio.h>
main()
{
	int i,num;
	
	printf("Enter the value of num : ");
	scanf("%d",&num);
	
	int a = 0, b = 1;
	
	int next = a + b;
	printf("Fibonacci number is : %d, %d,",a,b);
	
	for(i=3;i<=num;++i){
		printf(" %d,",next);
		a = b;
		b = next;
		next = a + b;
	}
}
