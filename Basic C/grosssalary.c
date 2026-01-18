#include <stdio.h>

int main() {
    float basic_salary, da, room_rent, gross_salary;

    // Input from the user
    printf("Enter Basic Salary: ₹");
    scanf("%f", &basic_salary);

    // Calculations
    da = basic_salary * 0.14; // 14% Dearness Allowance
    room_rent = basic_salary * 0.20; // Assuming 20% Room Rent Allowance
    gross_salary = basic_salary + da + room_rent;

    // Output the results
    printf("\nSalary Breakdown:\n");
    printf("Basic Salary     : ₹%.2f\n", basic_salary);
    printf("Dearness Allow.  : ₹%.2f (14%% of Basic)\n", da);
    printf("Room Rent Allow. : ₹%.2f (20%% of Basic)\n", room_rent);
    printf("-------------------------------\n");
    printf("Gross Salary     : ₹%.2f\n", gross_salary);

    return 0;
}