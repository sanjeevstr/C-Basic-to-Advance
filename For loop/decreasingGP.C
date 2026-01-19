#include <stdio.h>
int main() {
    int n, i;
    float first = 100;
    float ratio = 0.5;
    float term = first;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    printf("GP series: ");
    for (i = 0; i < n; i++) {
        printf("%g ", term);
        term = term * ratio;
    }
    printf("\n");
    return 0;
}