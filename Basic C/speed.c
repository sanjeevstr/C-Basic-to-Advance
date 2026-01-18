#include <stdio.h>
#include <conio.h>
void main ()
{
    float speed,distance,time;
    printf("Enter the distance : ");
    scanf("%d",&distance);
    printf("Enter the time : ");
    scanf("%d",&time);
    speed=distance/time;
    printf("The speed is %f ",speed);
    getch();

}