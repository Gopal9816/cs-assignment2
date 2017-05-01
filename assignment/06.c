#include <stdio.h>

void main()
{int  m=0,l=0;
int n;
char a[100],pattern[100],replace[100];
printf("Enter the string \n ");
scanf("%[^\n]",a);
printf("Enter the pattern \n");
scanf("%s",pattern);
printf("Enter the replacing string\n");
scanf("%s",replace);
for(int i=0;a[i]!='\0';i++)
m++;

for(int i=0;pattern[i]!='\0';i++)
	l++;

for(int i=0;i<=(m-l);i++)
{n=0;
	for(int j=i,k=0;j<(l+i),k<l;j++,k++)
	{if(a[j]==pattern[k])
		n++;
	 }
if(n==l)
for(int j=i,k=0;replace[k]!='\0';)
a[j++]=replace[k++];

	
}


printf("%s",a);

}