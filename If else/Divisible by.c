//Divisible by 5

#include <stdio.h>
int main()
{
    int a;

    printf("Enter a Number:");
    scanf("%d",&a);

    if (a%5==1)
    {
        printf("%d is Divisible by 5",a);
    }
    else{
        printf("%d is not divisible by 5",a);
    }

    return 0;

}