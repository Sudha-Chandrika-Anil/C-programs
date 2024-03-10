#include <stdio.h>
int main()
{
	int n,i,a[5],b[5],c[5];
	printf("Enter the highest term");
	scanf("%d",&n);
	for(i=n;i>=0;i--)
	{
		printf("Enter co-efficient of x^%d of the first polynomial",i);
		scanf("%d",&a[i]);
	}
	
	for(i=n;i>=0;i--)
	{
		printf("Enter co-efficient of x^%d of the second polynomial",i);
		scanf("%d",&b[i]);
	}
	printf(" Result: ");
	for(i=n;i>=0;i--)
	{
		c[i]=a[i]+b[i];
		if(i==0)
		printf(" %d",c[i]);
		else
		printf(" %dx^%d+",c[i],i);
	}
	return 0;
}
