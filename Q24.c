#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	printf("Enter the name : ");
	gets(name);
	
	printf("\n name = %s",name);
	
	printf("\n length of string : %d",strlen(name));
}

