// Input and Output

#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter Your Name: ");
    scanf("%s",&name);

    printf("This is your Compiler \n");
    printf("Nice to meet you %s",name);
}

/* Output --> This is your Compiler
              Nice to meet you [Your name]
*/