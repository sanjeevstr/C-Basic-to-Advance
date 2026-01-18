// Basic Age Calculator

#include <stdio.h> 
void main()
{
    int a;

    printf("Enter Your birth year: ");
    scanf("%d",&a);

    a=2026-a;
    printf("You are %d year's Old.",a);


}