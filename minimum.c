#include <stdio.h>

int main()
{
    int array[100],minimum,size,c,location=1;
    printf("enter the number of elements in array\n");
    scanf("%d",&size);
    printf("enter %d integer\n",size);
    for(c=0;c<size;c++)
    scanf("%d",&array[c]);
    minimum=array[0];
    for(c=1;c<size;c++)
    {
        if(array[c]<minimum)
        {
            minimum=array[c];
            location=c+1;
        }
    }
printf("minimum element present at the location is %d and it's value is %d.\n",location,minimum);
return 0;
}
