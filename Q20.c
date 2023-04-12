# include <stdio.h>
reverse(char *str)
{
if (*str)
{
	reverse(str+1);
	printf("%c", *str);
}
}


int main()
{
char a[30];

printf("Enter the string : ");
gets(a);

reverse(a);

}

