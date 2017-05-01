#include <stdio.h>
char b[100];
int n=0;
void stringrev(char *a)
{
if(*a!='\0')
{
	stringrev(a+1);
	b[n++]=*a;
}


}


void main()
{
char s[100];
int c;
printf("Enter the string ");
scanf("%s",s);
stringrev(s);
for(int i=0;s[i]!='\0';i++)
	if(s[i]!=b[i])
	{c=0;
	break;}
	else
	c=1;	
if(c==1)
printf("The string is palindrome ");
else
printf("The string is not palindrome ");
	
	
}
