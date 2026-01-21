#include <stdio.h>
void main()
{
    int num, temp, digit, sum;

    for (num = 1; num <= 500; num++)
    {
        temp = num;
        sum = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }

        if (sum == num)
        {
            printf("%d ", num);
        }
    }

}