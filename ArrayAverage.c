#include<stdio.h>
#define MAX 30

float function(int arr[],int lim)
{
   int i;
   float avg =0;
   for(i=0;i<lim;i++){
       avg+=arr[i];
   }
   return avg/lim;
}


int main()
{   
    int i,n, A[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        
    float out=function(A,n);    
    
    printf("%f",out);
    return 0;
}


