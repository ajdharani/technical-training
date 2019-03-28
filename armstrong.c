#include <stdio.h>

int main()
{
    int num,originalnum,remainder,result=0;
    printf("enter the three integer:");
    scanf("%d",&num);
    originalnum=num;
    while(originalnum !=0)
    {
        remainder=originalnum%10;
        result+=remainder*remainder*remainder;
        originalnum /=10;
    }
    if(result==num)
    printf("%d is a armstrong number",num);
    else
    printf("%d is a not armstrong number",num);
}
