#include<stdio.h>
main()
{
	int row,col;
	int num;
	
	printf("Enter the value of num : ");
	scanf("%d",&num);
	
	for(row=0;row<=num;row++){
		for(col=0;col<=row;col++){
			printf("%c",'A'+col);
		}
		printf("\n");
	}
}
