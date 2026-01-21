#include<stdio.h>
void main()
{
    int n;
    int fact = 1;
    int i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        fact = fact * i;
        i++;

    }
    printf("The Factorial of %d is = %d\n", n, fact);

}