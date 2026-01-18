// check if first digit is greater than last digit

#include<stdio.h>
void main()
{
    int n,first,last;

    printf("Enter Number:");
    scanf("%d",&n);

    first=n%10;
    last=n/100;

    if (first>last)
    {
        printf
            ("First digit is greater than last digit.");
        
    }else 
    {
        printf("last digit is greater than first digit.");
    }
    


    
}