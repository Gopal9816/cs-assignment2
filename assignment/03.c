#include<stdio.h>


int isUpperTriangular(int a[50][50],int n)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
		if(i>j)
<<<<<<< HEAD
		{if(a[i][j]!=0)
			return (0);}
=======
		{if(a[i][j]!=0)return 0;}
>>>>>>> 70c44401cb7218151637421fd2cb81ae1ba6b936
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

s=isUpperTriangular(a,n);
printf("\n%d\n",s);
}

