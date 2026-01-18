#include <stdio.h>
void main ()
{
    int a = 1,b=2,c=3,k;
    k=a++*(++b)+ ++a-(--c);
    printf("a=%d\nb=%d\n c= %d\n k=%d\n", a, b,c, k);
}