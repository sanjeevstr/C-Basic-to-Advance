//* Write a c program to check grade based on marks //*

#include <stdio.h>
void main()
{
    int marks;

    printf("Enter your Marks :");
    scanf("%d",&marks);

    if (marks>=90 && marks<=100)
    {
        printf("(A+) very good");
    }else if (marks>=60 && marks<90)
    {
        printf("A grade");
    }else if (marks>=45 && marks<60)
    {
        printf("B grade");
    }else if (marks>=33 && marks<45)
    {
        printf("C grade (pass)");
    }else if (marks>=0 && marks<33)
    {
        printf("D grade (fail)");
    }
    else
    {
        printf("Invalid Marks");
    }
}
