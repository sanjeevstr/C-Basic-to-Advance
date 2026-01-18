#include <stdio.h>
void main ()
{
    int min,hr,day,week;
    printf("Enter the minutes: ");
    scanf("%d",&min);
    hr=min/60;
    day=hr/24;
    week=day/7;
    printf("The minutes in hours is: %d\n",hr);
    printf("The minutes in days is: %d\n",day);
    printf("The minutes in week is: %d\n",week);
       
}