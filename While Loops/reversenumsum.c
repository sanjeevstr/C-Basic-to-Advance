#include <stdio.h>

int main()
{
    int n, original, reverse = 0, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        reverse = reverse * 10 + (n % 10);
        n = n / 10;
    }

    sum = original + reverse;

    printf("Reverse = %d\n", reverse);
    printf("Sum = %d\n", sum);

    return 0;
}
