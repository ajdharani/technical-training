#include<stdio.h>
#include<conio.h>
void main()
{
    char str[50];
    int i,count=0;
    clrscr();
    printf("\nEnter any string : ");
    gets(str);
    for(i=0;str[i];i++)
    if(str[i] == ' ')
    count++;
    printf("\nTotal blank spaces : %d",count);
    getch();
    }
