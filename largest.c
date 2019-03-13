#include <stdio.h>

int main()
{
  int num1,num2,num3;
  printf("enter the numbers num1,num2,num3\n");
  scanf("%d%d%d",&num1,&num2,&num3);
  if(num1>num2)
  {
      if(num1>num3)
      {
      printf("the largest num is num1");
      }
      else
      {
      printf("the largest num is num3");
      }
  }
  else if(num2>num3)
       printf("the largest num is num2");
      else
       printf("the largest num is num3");
  }
