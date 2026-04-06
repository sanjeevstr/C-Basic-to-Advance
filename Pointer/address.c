#include <stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    printf("Address of a is %p\n", a);
    printf("Address of a using pointer p is %p\n", &a);
    printf("Address of a using pointer p is %p\n", p);
    printf("Value of a is %d\n", a);
    printf("Value of a using pointer p is %d\n", *p);

}