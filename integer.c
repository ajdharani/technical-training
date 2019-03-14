#include <stdio.h>

int main()
{
    long long n;
    int count=0;
    printf("enter an integer:");
    scanf("%d",&n);
    while(n!=0)
    {
        num/=10;
        ++count;
    }
    printf("number of digits:%d",count);
}
