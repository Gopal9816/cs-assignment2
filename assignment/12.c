#include <stdio.h>
int l,l2,s,s2;
void large(int a[100],int n)
{
	l=0;
	for(int i=0;i<n;i++)
     if(a[i]>l)   
{   l2=l;
	l=i;}
	
}

void small(int a[100],int n)
{
s=a[0];
for(int i=0;i<n;i++)
if(a[i]<s)
{s2=s;
	s=i;}
}

void main()
{
int a[100],n,t;
printf("Enter the size of the array\n");
scanf("%d",&n);
printf("Enter the array\n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
large(a,n);
small(a,n);
t=a[l];
a[l]=a[s];
a[s]=t;
t=a[l2];
a[l2]=a[s2];
a[s2]=t;
printf("The new array is ");
for(int i=0;i<n;i++)
printf("\n %d",a[i]);

}
