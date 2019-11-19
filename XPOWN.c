#include <stdio.h>
#define mod 1000000007
long long int xpown(long long int x,long long int n)
{
	long long int a;
	if(n==0)
	{
		return 1;
	}
	if(n==1)
	{
		return x;
	}
	a=xpown(x,n/2);
	a=(a*a)%mod;
	if(n%2==1)
	{
		a=(a*x)%mod;
	}
	return a;
}
int main()
{
	long long int i,n;
	printf("Enter the no. x and power n:");
	scanf("%lld%lld",&i,&n);
	printf("%lld^%lld=%lld\n",i,n,xpown(i,n));
	return 0;
}


