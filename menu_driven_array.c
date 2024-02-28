#include<stdio.h>
int arr[3];
int pos=-1;
void insert(int a)
{
	if(pos+1==3)
	{
		printf("\narray is full\n");
	}
	else
    arr[++pos]=a;
}
void search() 
{
	int x,f;
	printf("\nEnter element to search: ");
    scanf("%d", &x);
    for(int i=0;i<pos+1;i++)
    {
     	if(arr[i]==x)
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
    	printf("element %d is present in the array",x);
	}
	else
	printf("element not found");
}
void del()
{
    if (pos == -1) 
    {
		printf("\narray is empty\n");
    }
    else
    printf("\nthe deleted element is %d",arr[pos--]);
}
void elem()
{
	int n;
	printf("sorted array:");
	for (int i = 0; i <pos+1;i++) 
    {
	    for (int j = i + 1; j < pos+1; ++j)
        {
        	if(arr[i]>arr[j])
            {
        		n =  arr[i];
            	arr[i] = arr[j];
            	arr[j] = n;
			}  
		}
          
		printf("\n%d\t",arr[i]);      
    }
}
int menu()
{
	int ch;
	printf("\ninsert-1,search-2,delete-3,sort-4\nenter your choice");
	scanf("%d",&ch);
	return ch;
}
int main()
{
	int ch,b;
	for(ch=menu();ch!=5;ch=menu())
	{
		switch(ch)
		{
			case 1:
			    printf("enter the element");
			    scanf("%d",&b);
			    insert(b);
			    break;
			case 2:
				search();
				break;
			case 3:
				del();
				break;
			case 4:
				elem();
				break;
			default:
			    printf("\n wrong choice");
				break;	
			}
	}
return 0;
}
