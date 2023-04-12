#include<stdio.h>
main()
{
	int i,n;
	int ecount = 0;
	int ocount = 0;
	
	int esum = 0;
	int osum = 0;
	
	for(i=0;i<=10;i++)
	{
		printf("Enter the number : ");
		scanf("%d",&n);
		if(n%2==0)
		{
			ecount+=1;
			esum+=n;
		}
		else
		{
			ocount+=1;
			osum+=n;
		}
	}
	printf("\n ecount = %d",ecount);
	printf("\n ocount = %d",ocount);
	
	printf("\n esum = %d",esum);
	printf("\n osum = %d",osum);
}
