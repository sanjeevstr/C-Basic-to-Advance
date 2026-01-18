//Vote Elizibility

#include <stdio.h>
void main()
{
    int age;

    printf("enter oyur age :");
    scanf("%d", &age);

    {
        if (age >= 18)
        {
            printf("you are able to vote");
        }

        else
        {
            printf("You are unable to vote");
        }
    }
}