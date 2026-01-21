#include <stdio.h>
void main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    int sum = 0;
    int last_digit;
    
    while (num != 0)
    {
        last_digit = num %10;
        sum  = sum +last_digit;
        num = num / 10;
    }

    printf("Sum of digits is %d\n", sum);
}