// convert Cm into m and km

#include<stdio.h>
void main()
{
    int cm,m,km;
    printf("enter cm :");
    scanf("%d",&cm);
    m=cm/100;
    km=cm/100000;
    printf("km=%d\t m=%d\t",km,m);

}