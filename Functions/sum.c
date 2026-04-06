#include <stdio.h>
int add(int y, int z)
{
    return y + z;
}

int main()
{
    int a,b,sum;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b); 
    sum=add(a,b);
    printf("The sum of %d and %d is %d\n", a, b, sum);
} 