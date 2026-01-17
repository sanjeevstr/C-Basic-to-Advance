// Even or Odd

#include <stdio.h>
int main()

{
    int a;

    printf("Enter a Number:");
    scanf("%d", &a);

    if (a%2==1)
    {
        printf("Odd Number");
    }
    else 
    {
        printf("Even Number");
    }
    
}