// Electricity Bill Calculator

#include <stdio.h>
void main() {
    int units;
    float bill = 0;

    printf("Enter units consumed: ");
    scanf("%d",&units);

    if (units <= 100) {
        bill = units * 1.50;
    }
    else if (units <= 200) {
        bill = (100 * 1.50) + (units - 100) * 2.00;
    }
    else {
        bill = (100 * 1.50) + (100 * 2.00) + (units - 200) * 3.00;
    }

    if (bill > 500) {
        bill = bill + (bill * 0.10);
    }

    printf("Units Consumed: %d\n", units);
    printf("Total Bill Amount: %.2f\n", bill);

}
