#include<stdio.h>
int main() {
    int num, first, last, swapped, middle;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    // Extract last digit
    last = num % 10;
    // Extract first digit
    first = num / 100;
    // Extract middle digit
    middle = (num / 10) % 10;

    // Swap first and last digits
    swapped = last * 100 + middle * 10 + first;
    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
