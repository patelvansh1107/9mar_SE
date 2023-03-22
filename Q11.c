#include<stdio.h>
main()
{
	int i,a,n;
	
	printf("Enter the value of the n : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		a = n * i;
		printf("%d * %d = %d\n",n,i,a);
	}
}
