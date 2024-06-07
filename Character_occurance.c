#include<stdio.h>
#define MAX 100

int function(char * str, char character)
{
   int occ=0,i;
   for(i=0;i<strlen(str);i++){
        if(str[i]==character){
            occ++;
        }
   }
   return occ;
}


void main()
{   
    char ch,text[MAX];
    ch=getchar();
    fgets(text, sizeof(text), stdin);
    
    int out=function(text,ch);
    printf("%d",out);
}

