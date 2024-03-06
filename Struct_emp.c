#include<stdio.h>
int n;
struct emp 
{
	int eno;
	char ename[20];
	int esal;
	int dno;
};

void search( struct emp e[], int n)
{
	int i,num,f;
	printf("\nEnter the emp no: to be searched");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(e[i].eno==num)
		{
		  	f=1;
		  	break;
	 	}
		else
		{
			f=0;
		}
		
	}
	if(f==1)
	{
		printf("Employee found\n");
	}
	else
	{
		printf("Employee not found\n");
	}
}
 struct emp sort( struct emp e[],int n)
 {
 	struct emp t;
 	int i,j;
 	printf("\n sorted by name");
 	for(i=0;i<n;i++)
 	{
 		for(j=i+1;j<n;j++)
 		{
 		 if((strcmp(e[i].ename,e[j].ename))<0)
		  {
		  	t=e[i];
		  	e[i]=e[j];
		  	e[j]=t;
		  }	
		}
	}
 	return e[n];
 }
int main()
{
	int i;
	struct emp e[10];
	printf("No:of employees");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	
	 printf("\nEnter emp no:,emp name,emp salary and dept no:\n");
	 scanf("%d %s %d %d",&e[i].eno,&e[i].ename,&e[i].esal,&e[i].dno);
    }
    for(i=0;i<n;i++)
	{
	 printf("%d %s %d %d \n",e[i].eno,e[i].ename,e[i].esal,e[i].dno);
  	}
    search(e,n);
    sort(e,n);
    for(i=0;i<n;i++)
	{
	 printf("\n%d %s %d %d \n",e[i].eno,e[i].ename,e[i].esal,e[i].dno);
  	}
}
