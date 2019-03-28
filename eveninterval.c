#include <stdio.h>

int main()
{
    int m=5,n=10,num;
    printf("enter the two numbers in a given range m to n:\n");
    for(num=m;num<n;num++)
    {
        if(num%2==0)
        printf("%d",num);
    }
    getch();
}
