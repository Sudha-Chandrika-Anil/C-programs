#include<stdio.h>
struct poly{
	int c;
};

int main()
{
	struct poly a[10],b[10],p[10];
	int i, j,n;
	printf("Enter the highest term");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter coefficient of 1st polynomial x^%d  ",i);
		scanf("%d",&a[i].c);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter coefficient of second polynomial x^%d  ",i);
		scanf("%d",&b[i].c);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++){
		
		p[i+j].c=0;
	}}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			p[i+j].c+=a[i].c*b[j].c;
		}
	}
	printf("Result: ");
		for(i=n-1;i>=0;i--)
	{
		for(j=i;j>=0;j--)
		{
			if(i==0)
			printf("%d",p[i+j].c,i+j);
			else
			printf("%dx^%d + ",p[i+j].c,i+j);
		}
	}
	return 0;
}
