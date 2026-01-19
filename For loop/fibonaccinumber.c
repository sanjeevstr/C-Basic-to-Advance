// Fabonacci Series..

#include <stdio.h>
void main() {
    int n, i;
    int a = 1, b = 1, sum;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    
    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        sum = a + b;
        a = b;
        b = sum;
    }
    
}