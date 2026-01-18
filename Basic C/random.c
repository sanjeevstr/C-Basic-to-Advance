#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main ()
{
    int a,b,c,d,e;
    srand(time(0));
    a = rand() % 100;  
    b = rand() % 100;
    c = rand() % 100;
    d = rand() % 100;
    e = rand() % 100;
    printf("Random numbers: %d %d %d %d %d", a, b, c, d, e);
    
}