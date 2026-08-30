#include <stdio.h>

int main() {
    // Declare and initialize basic salary
    double basicSalary = 85000.00;

    // Calculate allowances
    double hra = 0.20 * basicSalary;
    double ma = 0.10 * basicSalary;

    // Calculate gross salary
    double grossSalary = basicSalary + hra + ma;

    // Calculate income tax deduction
    double tax = 0.05 * grossSalary;

    // Calculate net salary
    double netSalary = grossSalary - tax;

    // Display formal pay slip
    printf("===============================================\n");
    printf("\t\tEMPLOYEE PAY SLIP\n");
    printf("===============================================\n");

    printf("Basic Salary\t\t: PKR %.2f\n", basicSalary);
    printf("House Rent Allowance\t: PKR %.2f\n", hra);
    printf("Medical Allowance\t: PKR %.2f\n", ma);
    printf("Gross Salary\t\t: PKR %.2f\n", grossSalary);
    printf("Income Tax Deduction\t: PKR %.2f\n", tax);
    printf("Net Salary\t\t: PKR %.2f\n", netSalary);

    printf("===============================================\n");

    return 0;
}
