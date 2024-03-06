#include<stdio.h>
struct date
{
	int dd;
	int mm;
	int yy;
};
struct date read()
{
	struct date d;
	printf("Enter date in dd mm yyyy format");
	scanf("%d %d %d",&d.dd,&d.mm,&d.yy);
	return d;
}
void disp(struct date d1, struct date d2)
{
	printf("\nFirst date: %d %d %d",d1.dd,d1.mm,d1.yy);
	printf("\nsecond date: %d %d %d",d2.dd,d2.mm,d2.yy);
}
void cmp_date(struct date d1, struct date d2)
{
	if(d1.dd== d2.dd && d1.mm==d2.mm && d1.yy== d2.yy)
	{
		printf(" \nThe dates are equal");
	}
	else if(d1.yy> d2.yy|| d1.yy==d2.yy&& d1.mm>d2.mm|| d1.yy== d2.yy&&d1.mm==d2.mm&& d1.dd>d2.dd)
	{
		printf("\nFirst date is greater than second date");
	}
	else
	{
		printf("\nSecond date is greater than the first date ");
	}
}
int main()
{
	struct date d1,d2;
	d1=read();
	d2= read();
	disp(d1,d2);
	cmp_date(d1,d2);
}
