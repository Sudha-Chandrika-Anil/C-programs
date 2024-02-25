#include<stdio.h>
int stack[5],top=-1;
void push(int e)
{
    if(top+1==5)
    printf("Stack overflow\n");
    else
    stack[++top]=e;
}
void pop()
{
    if(top==-1)
    printf("Stack underflow\n");
    else
    printf("Removed Element: %d\n",stack[top--]);
}
int menu()
{
    int ch;
    printf("Push-1\nPop-2\nPeek-3\nExit-4\nYour Choice: ");
    scanf("%d",&ch);
    return ch;
}
int peek()
{
    printf("The topmost element is %d\n",stack[top]);
}
void process()
{
    int ch;
    for(ch=menu();ch!=4;ch=menu())
    {
        switch(ch)
        {
            case 1 : printf("Enter the element ");
                     scanf("%d",&ch);
                     push(ch);
                     break;
            case 2 : pop();
                     break;
            case 3 : peek();
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
