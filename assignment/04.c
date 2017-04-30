#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],m,n,i,j,x,y;
	printf("Enter number of rows n columns:");
	scanf("%d %d",&m,&n);
	printf("Enter elements of first matrix\n");
	for(i=0;i<m;++i)
		for(j=0;j<n;++j)
			scanf("%d",&a[i][j]);
	printf("Enter elements of second matrix\n");
	for(i=0;i<m;++i)
		for(j=0;j<n;++j)
			scanf("%d",&b[i][j]);
	printf("Enter values for x and y");
	scanf("%d %d",&x,&y);
	for(i=0;i<m;++i)
		for(j=0;j<n;++j)
			c[i][j]=x*a[i][j]+y*b[i][j];
	printf("The result is:\n");
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
			printf("%d ",c[i][j]);
		printf("\n");
	}
}
