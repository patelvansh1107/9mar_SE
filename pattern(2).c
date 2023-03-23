#include<stdio.h>
main()
{
	int row,col;
	int num;
	int n=1;
	
	printf("Enter the value of num : ");
	scanf("%d",&num);
	
	for(row=1;row<=num;row++){
		for(col=1;col<=row;col++){
			printf("%d",n);
			n++;
		}
		printf("\n");
	}
}
