#include<stdio.h>

int fun(int num)
{   
    int rem,max=0;
    while(num>0){
        rem=num%10;
        if(rem>max){
            max=rem;
        }
        num=num/10;
    }
    return max;
}


int main()
{   
    int num,result;
    scanf("%d",&num);
    result=fun(num);
    printf("%d",result);
    return 0;
}

