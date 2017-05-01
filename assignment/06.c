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
