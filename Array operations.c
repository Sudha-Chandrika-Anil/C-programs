#include <stdio.h>
#define max_size 5
int a[max_size],pos=-1,size=0;
void insert(int e)
{
    if(pos+1==5)
        printf("Error:Array is full\n");
    else
    a[++pos]=e;
}
void search(int key)
{
printf("Enter element to search: ");
scanf("%d",&key);
for(int i=0;i<size;i++){
if(a[i]==key)
    printf("The element %d is found!",i);
else
    printf("The element %d is not found!",i);
}
}
void delete()
{
    if(pos==-1)
    printf("Error:Array is empty\n");
    else
    printf("Deleted Element: %d\n",a[pos--]);
}
void sort()
{
    int temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void disp()
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int menu()
{
    int ch;
    printf("Insert-1\nSearch-2\nDelete-3\nSort-4\nDisplay-5\nExit-6\nYourChoice: ");
    scanf("%d",&ch);
    return ch;
}
void process()
{
    int ch;
    for(ch=menu();ch!=6;ch=menu())
    {
        switch(ch)
        {
            case 1 : printf("Enter the element ");
                     scanf("%d",&ch);
                     insert(ch);
                     break;
            case 2 : printf("Enter the element to search ");
                     scanf("%d",&ch);
                     search(ch);
                     break;
            case 3 : delete();
                     break;
            case 4 : sort();
                     break;
            case 5 : disp();
                     break;
            default : printf("Error:Wrong Choice");       break;
        }
    }
}
int main()
{
    process();
    return 0;
}
