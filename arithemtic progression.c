#include <stdio.h>

int main() {
    
    int a, n, d, tn, i;
    int sum = 0;
    
    printf(" Please Enter First Number of an A.P Series:  ");
    scanf("%d", &a);
    printf(" Please Enter the Total Numbers in this A.P Series:  ");
    scanf("%d", &n);
    printf(" Please Enter the Common Difference:  ");
    scanf("%d", &d);
    
    sum = (a*(n+d)) ;
    tn = a + (n - 1) * d;
    i = a;
    printf("\n The Sum of Series A.P. : ");
    while(i <= tn)
    {
        if(i != tn)
            printf("%d + ", i);
        else
            printf("%d = %d", i, sum);
        i = i + d;
    }
    printf("\n");
    return 0;
}
