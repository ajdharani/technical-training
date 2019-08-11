#include <stdio.h>
#include <stdlib.h>
int nummin=103;
int main(void)
{
  if((nummin/60)==1)
  printf("%01d hour",nummin/60);
  else
  printf("%1d hours",nummin/60);
  if((nummin%60)==1)
  printf("%01d min\n",nummin%60);
  else
  printf("%01d min\n",nummin%60);
  return 0;
}
