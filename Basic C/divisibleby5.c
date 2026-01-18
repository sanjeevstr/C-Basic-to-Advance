// three digit number if number is divisible by 5 than square the 3 digit number

#include<stdio.h>
void main() {
    int a, b, c;
    
    printf("Enter a three-digit number: ");
    scanf("%d", &a);

    if (a < 100 || a > 999) {
        printf("Please enter a valid three-digit number.\n");

    }
    else if (a % 5 == 0 )
    {
        printf("%d is divisible by 5.\n",a);
        printf("The square of %d is %d.",a,a*a);
    }
    else if( a /5 !=0)
    {
        printf("Not divisible by 5.\n");
    }
    
}