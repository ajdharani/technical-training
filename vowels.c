#include <stdio.h>

int main()
{
    char c;
    int isLowercaseVowel,isUppercaseVowel;
    printf("enter an alphabet:");
    scanf("%c",&c);
    isLowercaseVowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    isUppercaseVowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(isLowercaseVowel||isUppercaseVowel)
    printf("%c is a Vowel",c);
    else
    printf("%c is a consonant");
    return 0;
}
