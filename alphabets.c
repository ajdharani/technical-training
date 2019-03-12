#include <stdio.h>

int main()
{
    char alphabet;
    printf("enter an alphabet:");
    scanf("%c",&alphabet);
    if(alphabet>='a'&&alphabet>='z')||(alphabet>='A'&&alphabet>='Z'));
    printf("%c is an alphabet.",alphabet);
    else
    printf("%c is not an alphabet.",alphabet);
    return 0;
}
