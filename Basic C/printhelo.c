#include <stdio.h>

void printH() {
    printf("*   *\n");
    printf("*   *\n");
    printf("*****\n");
    printf("*   *\n");
    printf("*   *\n");
}

void printE() {
    printf("*****\n");
    printf("*    \n");
    printf("*****\n");
    printf("*    \n");
    printf("*****\n");
}

void printL() {
    printf("*    \n");
    printf("*    \n");
    printf("*    \n");
    printf("*    \n");
    printf("*****\n");
}

void printO() {
    printf(" ***** \n");
    printf("*     *\n");
    printf("*     *\n");
    printf("*     *\n");
    printf(" ***** \n");
}

int main() {
    printH();
    printE();
    printL();
    printL();
    printO();
    
    return 0;
}