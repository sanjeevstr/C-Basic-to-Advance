// Simple Interest Calculator

#include<stdio.h>
void main ()
    {
        int si, principle, rate, time;
        printf("Enter the principle amount: ");
        scanf("%d", &principle);
        printf("Enter the rate of interest: ");
        scanf("%d", &rate);
        printf("Enter the time period: ");
        scanf("%d", &time);
        si = (principle * rate * time) / 100;
        printf("The simple interest is: %d", si);
        
    }
