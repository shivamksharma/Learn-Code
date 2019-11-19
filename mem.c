#include <stdio.h>

int main()
{
	int n,i;
	printf("\nEnter the size of array(a):");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	memcpy(b,a,i*sizeof(int));
	printf("\nCopied array(b):\n");
	for(i=0;i<n;i++)
	printf("%d ",b[i]);
	return 0;
}
