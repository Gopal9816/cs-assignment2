#include <stdio.h>
long int factorial(int n)
{int f=1;
for(int i=1;i<=n;i++)
f=f*i;
return f;

}

void main()
{
int n,r;
float nCr;
long int d;
printf("Enter n,r in nCr\n");
scanf("%d%d",&n,&r);
nCr=factorial(n)/(factorial(r)*factorial(n-r));
printf("%dC%d=%f ",n,r,nCr);
}