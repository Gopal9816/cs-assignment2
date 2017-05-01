#include <stdio.h>
void main()
{
int l=0,m=0,c=0,n=0; 
char a[100],pattern[100];
printf("Enter the string\n");
scanf("%s",a);
printf("\nEnter the pattern");
scanf("%s",pattern);
for(int i=0;pattern[i]!='\0';i++)
l++;
for(int i=0;a[i]!='\0';i++)
m++;
for(int i=0;i<=(m-l);i++)
{c=0;
	for(int j=i,k=0;j<(l+i);j++,k++)
	{if(a[j]==pattern[k])
		c=1;
	else
	{c=0;	
	   break;}
	 }   
	if(c==1)
		n++;
} 	
      printf("The number of occurances of %s is %d ",pattern,n);

      }          