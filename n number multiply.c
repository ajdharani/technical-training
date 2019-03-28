#include <stdio.h>
#include<conio.h>
void main()
{
  int sum=0,i,n;
  clrscr();
  printf("\n please give the value of n:");
  scanf("%1d",&n);
  for(i=1;i<=n;i++)
  {
      printf("\n 5*%1d=%1d",i,5*i);
  }
  getch();
}
