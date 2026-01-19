#include<stdio.h>
void main()
{
    int n;
    int sum = 0;
    int i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        if (i%2!=0) sum =sum + i;
        if (i %2 ==0) sum = sum -i;
    }
    
    printf("Sum = %d\n", sum);
}