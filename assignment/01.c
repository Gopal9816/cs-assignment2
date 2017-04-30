#include<stdio.h>
void main()
{
	int a[50][50],b[40],c[40],i,j,k=0,l=0,m,n;
	printf()
	scanf("%d %d",&m,&n);
	for(i=0;i<m;++i)
		for(j=0;j<n;++j)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;++i)
		for(j=0;j<n;++j)
			if(a[i][j]%2==0)
				b[k++]=a[i][j];
			else
				c[l++]=a[i][j];
	for(i=0;i<k;++i)
		printf("%d",b[i]);
	for(j=0;j<l;++j)
		printf("%d",c[j]);
}
