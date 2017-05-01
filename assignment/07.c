#include<stdio.h>
#include<string.h>
void main()
{
	int n,i,j,k;
	char str[40][20],temp[20];
	printf("Enter no of students in your class: ");
	scanf("%d",&n);
	printf("Enter names: \n");
	for(i=0;i<n;i++)
		scanf("%s",str[i]);
	for(i=0;i<n-1;++i)
		for(j=0;j<n-i-1;++j)
			if(strcmp(str[j],str[j+1])>0)
			{	strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}
			
	printf("The sorted list: \n");
	for(i=0;i<n;++i)
		printf("%s \n",str[i]);
}
