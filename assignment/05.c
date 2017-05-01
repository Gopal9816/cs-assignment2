#include<stdio.h>
void main()
{
	char str[50],l[10],m,k,i,j=0;
	printf("Enter the line of text: ");
	scanf("%[^\n]s",str);
	printf("Enter substring to be deleted: ");
	scanf("%s",l);
	for(i=0;str[i]!='\0';++i)
		if(str[i]==l[j])
			j++;
		else if(l[j]=='\0')
			break;
		else
			j=0;
	if(j==0)
		printf("Substring not found");
	else
	{
		for(k=i-j;str[i]!='\0';)
			str[k++]=str[i++];
		str[k]='\0';
	}
	printf("%s",str);

}
