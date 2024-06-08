#include<stdio.h>
#define MAX 100
#include<string.h>

char * function(char * str)
{
    
    int i;
    for(i=0;i<strlen(str);i++){
        if(str[i]==' '){
            str[i]=',';
        }
    }
    return str;
}


void main()
{   
    char text[MAX];
    fgets(text, sizeof(text), stdin);
    
    char * out=function(text);
    printf("%s",out);
    
}



