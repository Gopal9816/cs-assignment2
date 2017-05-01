#include<stdio.h>


int IsUpper(int a[50][50],int n)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
		if(i>j)
		{if(a[i][j]!=0;return 0;}
			return (1);
}


int main()
{
int a[50][50],n,s=0;
printf("enter the size of matrix");
scanf("%d",&n);
printf("enter the matrix"); 
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
scanf("%d",&a[i][j]);

s=IsUpper(a,n);
printf("\n%d\n",s);
}

