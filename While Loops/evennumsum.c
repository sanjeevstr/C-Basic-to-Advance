#include <stdio.h>
void main()
{
    int num,sum = 0,lastnum=0;

    printf("Enter a number : ");
    scanf("%d", &num);

  while (num != 0)
    {
        lastnum = num % 10;
        if (lastnum % 2 == 0)
        {
            sum = sum + lastnum;
        }
        num = num / 10;
    }

    printf("Sum of even digits is %d\n", sum);
}