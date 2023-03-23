#include<stdio.h>
main()
{
	int row,col;
	int num;
	
	printf("Enter the value of num : ");
	scanf("%d",&num);
	
	for(row=1;row<=num;row++){
		for(col=1;col<=row;col++)
		if(col%2==0){
			printf("0");
		}
		else{
			printf("1");
		}
		printf("\n");
	}
}
