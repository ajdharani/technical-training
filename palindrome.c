#include <stdio.h>

int main()
{
    int num,r,sum=0,temp;
    printf("enter the number=");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        r=num%10;
        sum=(sum*10)+r;
        num=num/10;
    }
    if(temp==sum)
    printf(" the number is a palindrome");
    else
    printf("the number is not a palindrome");
    return 0;
    }
