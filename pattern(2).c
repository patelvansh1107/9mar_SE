<<<<<<< HEAD
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
=======
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
>>>>>>> bd268e472f488137c8d35e6d66431544e160c9fd
