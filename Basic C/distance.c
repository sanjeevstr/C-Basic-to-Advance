// Distance Calculator

#include <stdio.h>
#include <math.h>
void main()
{
    float dis,time,speed;
    printf("Enter the speed : ");
    scanf("%f",&time);
    printf("Enter the time : ");
    scanf("%f",&speed);
    dis=speed*time;
    printf("The distance is %f ",dis);
    
}