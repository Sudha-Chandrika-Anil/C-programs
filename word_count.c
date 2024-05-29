#include<stdio.h>
#include<string.h>
#define MAX 100

int function(char * str)
{
   int i, count = 0;
    if (strlen(str) == 0) {
        return 0;
    }
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            count++;
        }
    }
    return count + 1;
}


void main()
{   
    char text[MAX];
    gets(text);
    
    int out=function(text);
    printf("%d",out);
}


