#include <stdio.h>

int main() {
    // Declare and initialize quantities and unit prices
    int teaQuantity = 3;
    double teaPrice = 60.00;

    int samosaQuantity = 4;
    double samosaPrice = 40.50;

    int rollQuantity = 2;
    double rollPrice = 120.00;

    // Calculate subtotal for each item
    double teaSubtotal = teaQuantity * teaPrice;
    double samosaSubtotal = samosaQuantity * samosaPrice;
    double rollSubtotal = rollQuantity * rollPrice;

    // Calculate bill subtotal
    double billSubtotal = teaSubtotal + samosaSubtotal + rollSubtotal;

    // Calculate GST
    double gst = 0.16 * billSubtotal;

    // Calculate final payable amount
    double finalAmount = billSubtotal + gst;

    // Display cashier receipt
    printf("====================================================\n");
    printf("\t\tCAFETERIA CASHIER RECEIPT\n");
    printf("====================================================\n");

    printf("Item\t\tQty\tUnit Price\tSubtotal\n");
    printf("----------------------------------------------------\n");

    printf("Tea\t\t%d\tPKR %.2f\tPKR %.2f\n",
           teaQuantity, teaPrice, teaSubtotal);

    printf("Samosa\t\t%d\tPKR %.2f\tPKR %.2f\n",
           samosaQuantity, samosaPrice, samosaSubtotal);

    printf("Chicken Roll\t%d\tPKR %.2f\tPKR %.2f\n",
           rollQuantity, rollPrice, rollSubtotal);

    printf("----------------------------------------------------\n");
    printf("Bill Subtotal\t\t\tPKR %.2f\n", billSubtotal);
    printf("GST (16%%)\t\t\tPKR %.2f\n", gst);
    printf("----------------------------------------------------\n");
    printf("Final Payable\t\t\tPKR %.2f\n", finalAmount);
    printf("====================================================\n");

    return 0;
}
