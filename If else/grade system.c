//Grade System

#include <stdio.h>
int main()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d",&marks);

    if (marks<=100 && marks>=90)
    {
        printf("A+");
    }else if (marks <=89 && marks >=70)
    {
        printf("A");
    }else if (marks<=69 && marks >=50)
    {
        printf("Not bad");
    }else if ( marks<=49 && marks >=30)
    {
        printf("Poor");
    }else if (marks<=29 && marks >=0)
    {
        printf("Fail.");
    }
    return 0;
}