  //sum of all elements above the main diagonal

#include<stdio.h>
int main()
{
int a[50][50],n,sum=0;
printf("enter the size of the square matrix");
scanf("%d",&n);

printf("enter the matrix");
for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
		scanf("%d",&a[i][j]);

for(int i=0;i<n;i++)
	 for(int j=0;j<n;j++)
		{
		 if(i<j)
			sum+=a[i][j];
				     }
printf("sum = %d",sum);
return 0;
}

