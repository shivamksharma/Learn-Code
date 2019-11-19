#include <stdio.h>
int main()
{
	int i,temp,a,b,min;
	printf("Enter the two no.s a and b:");
	scanf("%d%d",&a,&b);
	min=a;
	if(a>b)
	min=b;
	for(i=1;i<=min;i++)
	{
		if(a%i==0&&b%i==0)
		{
			temp=i;
		}
	}
	printf("GCD of two no.s is :%d\n",temp);
}
