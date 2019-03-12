#include <stdio.h>

int main()
{
    int num;
    
    printf("enter an integer\n");
    scanf("%d",&num);
    
    if(num%2==0)
    printf("even");
    else
    printf("odd");
    return 0;
}
