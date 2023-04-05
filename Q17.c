#include<stdio.h>
main()
{
	int n, sum=0;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	int first,last;
	
	last = n % 10;
	
	while(n>9){
		n /= 10;
	}
	first = n;
	
	sum = first + last;
	
	printf("sum = %d",sum);	
}
