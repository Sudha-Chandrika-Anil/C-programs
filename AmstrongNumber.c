#include<stdio.h>
#define MAX 100
#include<math.h>

int function(int num)
{
   int rem,temp=num,n,arm;
   int num1=num;
   while(temp>0){
       temp=temp/10;
       n++;
   }
   while(num>0){
        rem=num%10;
        arm=arm+pow(rem,n);
        num=num/10;
   }
   if(num1==arm)
        return 1;
   else
        return 0;
   
}


void main()
{   
    int num;
    scanf("%d",&num);
    int out=function(num);
    printf("%d",out);
}


