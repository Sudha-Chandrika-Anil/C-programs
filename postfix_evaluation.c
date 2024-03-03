#include <stdio.h>
#include <ctype.h>
char stack[10], postfix[10];
int top = -1;
void push(int item)
{

    
        top = top + 1;
        stack[top] = item;
    
}

int pop()
{
    int item;
    
        item = stack[top];
        top = top - 1;
        return item;
    
}


void EvalPostfix(char postfix[])
{

    int i;
    char ch;
    int val;
    int A, B;

    for (i = 0; i <5; i++) {
        ch = postfix[i];
        if (isdigit(ch)) {

            push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
       
            A = pop();
            B = pop();

            switch (ch) 
            {
            case '*':
                val = B * A;
                break;

            case '/':
                val = B / A;
                break;

            case '+':
                val = B + A;
                break;

            case '-':
                val = B - A;
                break;
            }

            
            push(val);
        }
    }
    printf(" \n Result of expression evaluation : %d \n", pop());
}

int main()
{

    int i;
    
    printf(" \nEnter postfix expression ");

    for (i = 0; i < 5 ; i++) {
        scanf("%c", &postfix[i]);

    }


    EvalPostfix(postfix);

    return 0;
}
