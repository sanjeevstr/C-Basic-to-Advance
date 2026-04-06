#include <stdio.h>

void greet(char name[])
{
    printf("Welcome to C programming.\n");
    printf("What are you Searching for %s? \n", name);
    return;
}
int main()

{
    char name[20];
    printf("Enter your name : ");
    scanf("%s", name);

    printf("Hello %s\n", name);
    greet(name);
    return 0;
}