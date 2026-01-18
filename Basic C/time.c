// time

#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
    float time,speed,distance;
    printf("Enter the speed r: ");
    scanf("%f",&speed);
    printf("Enter the distance : ");
    scanf("%f",&distance);
    time=distance/speed;
    printf("The time is %f ",time);
    getch();


}