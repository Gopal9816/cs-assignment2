<<<<<<< HEAD
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
=======
#include<stdio.h>
void main()
{
	int i,j=0,k,n,z=0,pos[10];
	char str[60],l[20],m[20];
	printf("Enter a line of text: ");
	scanf("%[^\n]",str);
	printf("Enter the pattern in line of text: ");
	scanf("%s",l);
	printf("Enter replacement: ");
	scanf("%s",m);
	for(i=0;str[i]!='\0';i++)
		if(str[i]==l[j])
			j++;
		else if(l[j]=='\0')
		{	pos[z++]=i-j;
			j=0;}
		else
			j=0;
	if(z==0)
		printf("String not found");
	else
	{	for(i=0;i<=z;i++)
			for(k=pos[i],n=0;m[n]!='\0';)
				str[k++]=m[n++];

	printf("%s \n",str);
	}
}
>>>>>>> 70c44401cb7218151637421fd2cb81ae1ba6b936
