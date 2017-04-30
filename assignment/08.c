#include<stdio.h>
int main()
{
char a[30];int i,count=1;

printf("enter a string");
scanf("%[^\n]s",a);
printf("%s",a);


for(i=0;a[i]!='\0';i++)
{
	if(a[i]==' '&&a[i-1]!=' ')
         count++;
}

if(a[i-1]==' ')
count--;

printf("\n %d \n",count);

}
