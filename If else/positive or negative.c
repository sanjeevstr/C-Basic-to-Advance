// Positive or Negative

#include <stdio.h> 
void main()
{
    int num;

    printf("Enter a Number: ");
    scanf("%d",&num);

    if (num >=0 )
    {
        printf("Positive Number \n");
        if (num % 2 == 0)
        {
            printf("Even");
        }else {
            printf("Odd");}
    }
    else
    {
        printf("Negative Number");
    }
    
}