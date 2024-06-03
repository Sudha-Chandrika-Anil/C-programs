#include<stdio.h>

int sumofdig(int num)
{
    int sum=0,i,dig;
    while(num!=0){
        dig=num%10;
        sum=sum+dig;
        num=num/10;
    }
    return sum;
}


int main()
{   
    int num,result;
    scanf("%d",&num);
    result=sumofdig(num);
    printf("%d",result);
    return 0;
}

