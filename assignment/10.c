#include <stdio.h>

void stringrev(char *a)
{
if(*a!='\0')
{
	stringrev(a+1);
	printf("%c",*a);
}


}


void main()
{
char s[100];

printf("Enter the string ");
scanf("%s",s);

stringrev(s);

}