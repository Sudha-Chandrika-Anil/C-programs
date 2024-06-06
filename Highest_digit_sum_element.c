#include<stdio.h>
#define MAX 30

int function(int arr[],int lim)
{
  int i,rem,sum,max=0,num,maxIndex;
  for(i=0;i<lim;i++){
    sum=0;
    num=arr[i];
    while(num>0){
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    if(sum>max){
        max=sum;
        maxIndex=i;
    }
  }
  return arr[maxIndex];
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


