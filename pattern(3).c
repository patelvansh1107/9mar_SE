#include<stdio.h>
main()
{
	int row,col;
	int num;
	int c = 65;
	
	printf("Enter the value of num : ");
	scanf("%d",&num);
	
	for(row=1;row<=num;row++){
		for(col=1;col<=row;col++){
			printf("%c",c);
			c++;
		}
		printf("\n");
	}
}
