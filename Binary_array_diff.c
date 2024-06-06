#include<stdio.h>
#define MAX 30

int function(int arr[],int lim)
{
   int cone=0,czero=0,i;
   for(i=0;i<lim;i++){
        if(arr[i]==1)
            cone++;
        else
            czero++;
   }
   if(cone>czero)
        return 1;
    else if(cone==czero)
        return 0;
    else
        return -1;
}


int main()
{   
    int i,n, A[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        
    int out=function(A,n);    
    
    printf("%d",out);
    return 0;
}


