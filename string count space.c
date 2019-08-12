#include <stdio.h>  
unsigned countWords(char *str) 
{ 
    int state = OUT; 
    unsigned wc = 0;  
    while (*str) 
    { 
       
        if (*str == ' ' || *str == '\n' || *str == '\t') 
            state = OUT; 
        else if (state == OUT) 
        { 
            state = IN; 
            ++wc; 
        } 
        ++str; 
    } 
  
    return wc; 
}  
int main(void) 
{ 
    char str[] = "One two three\n    four\tfive  "; 
    printf("No of words : %u", countWords(str)); 
    return 0; 
} 
