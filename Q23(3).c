#include<stdio.h>
main()
{
	int a[2][3] = {2,5,8,9,6,4};
	int b[2][3] = {4,5,6,8,2,3};
	int c[2][3];
	
	int row,col;
	
	printf("\n First matrix :- \n");
	for(row=0;row<2;row++){
		for(col=0;col<3;col++){
			printf(" %d ",a[row][col]);
		}
		printf("\n");
	}
	
	printf("\n Second matrix :- \n");
	for(row=0;row<2;row++){
		for(col=0;col<3;col++){
			printf(" %d ",b[row][col]);
		}
		printf("\n");
	}
	
	printf("\n Subtraction of matrix :- \n");
	for(row=0;row<2;row++){
		for(col=0;col<3;col++){
			c[row][col] = a[row][col] * b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
	}
}
