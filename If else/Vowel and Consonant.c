// Vowel or Consonant

#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a Alphabet:");
    scanf("%c",&ch);

    if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("%c is an vowel",ch);
    }else {
        printf("%c is a constant",ch); 
    }

    return 0;
    
}