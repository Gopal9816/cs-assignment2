#include <stdio.h>
char m[100];
int i=0;
char stringrev(char a[100],int n)
{return a[n-i]

m[i++]=stringrev(a[n-i],i);


}


void main()
{
char *a,s[100];
int n=0;
printf("Enter the string ");
scanf("%s",s);
for(int i=0;s[i]!='\0';i++)
n++;

a=stringrev(s,n);
printf("%s",a);

}