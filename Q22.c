#include<stdio.h>
main()
{
	int a[6]={23,56,12,5,32,78};
	int i,j,temp;
	
	printf("\n normal array\n");
	for(i=0;i<6;i++)
	{
		printf("%d,",a[i]);
	}
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(a[i] > a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n sorted array\n");
	for(i=0;i<6;i++)
	{
		printf("%d,",a[i]);
	}
}

//#include<stdio.h>
//main()
//{
//	int a[6]={23,56,12,5,32,78};
//	int i,j,temp;
//	
//	printf("\n normal array\n");
//	for(i=0;i<6;i++)
//	{
//		printf("%d,",a[i]);
//	}
//	for(i=0;i<6;i++)
//	{
//		for(j=i+1;j<6;j++)
//		{
//			if(a[i] < a[j])
//			{
//				temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//		}
//	}
//	printf("\n sorted array\n");
//	for(i=0;i<6;i++)
//	{
//		printf("%d,",a[i]);
//	}
//}
