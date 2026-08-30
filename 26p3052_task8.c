#include <stdio.h>

int main() {
    // Declare and initialize loan variables
    double principal = 250000.00;
    float rate = 8.5;
    int time = 3;

    // Calculate Simple Interest
    double interest = (principal * rate * time) / 100.0;

    // Calculate Total Payable Amount
    double totalAmount = principal + interest;

    // Calculate Monthly Installment
    double monthlyInstallment = totalAmount / (time * 12.0);

    // Display Loan Amortization Summary
    printf("===============================================\n");
    printf("\t\tLOAN AMORTIZATION SUMMARY\n");
    printf("===============================================\n");

    printf("Principal Loan Amount\t: PKR %.2f\n", principal);
    printf("Annual Interest Rate\t: %.2f%%\n", rate);
    printf("Loan Period\t\t: %d years\n", time);
    printf("Simple Interest\t\t: PKR %.2f\n", interest);
    printf("Total Payable Amount\t: PKR %.2f\n", totalAmount);
    printf("Monthly Installment\t: PKR %.2f\n", monthlyInstallment);

    printf("===============================================\n");

    return 0;
}
