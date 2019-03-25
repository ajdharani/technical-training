#include <stdio.h>

int main()
{
    int base,num;
    long long result=1;
    printf("enter the base number:");
    scanf("%d",&base);
    printf("enter the number of times multipy:");
    scanf("%d",&num);
    while(num!=0)
    {
        result*=base;
        --num;
    }
    printf("answer=%11d",result);
    return 0;
}
