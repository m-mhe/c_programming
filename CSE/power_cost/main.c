#include <stdio.h>

int main() {
    int cn;       // Customer number
    float pc, ap; // Power consumed, Amount to pay

    // Read customer number and power consumed
    printf("Enter customer number: ");
    scanf("%d", &cn);
    printf("Enter power consumed (in units): ");
    scanf("%f", &pc);

    // Calculate the amount to be paid based on the consumption rate
    if (pc <= 100) {
        ap = pc * 0.50;
    } else if (pc <= 400) {
        ap = 100 + (pc - 100) * 0.65;
    } else if (pc <= 600) {
        ap = 250 + (pc - 400) * 0.80;
    } else {
        ap = 410 + (pc - 600) * 1.80;
    }

    // Print the amount to be paid
    printf("Customer Number: %d\n", cn);
    printf("Amount to be paid: %.2f Taka\n", ap);

    return 0;
}
