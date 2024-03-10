#include <stdio.h>
int main()
{
	int n,i,a[5],b[5],c[5];
	printf("Enter the highest term");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("Enter co-efficient of x^%d of the first polynomial",i);
		scanf("%d",&a[i]);
	}
	
	printf("the first polynomial");
	for(i=n;i>=0;i--)
	{
		if(i==0)
		printf(" %d",a[i]);
		else
		printf(" %dx^%d+",a[i],i);
		
	}
