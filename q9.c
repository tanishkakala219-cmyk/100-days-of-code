#include <stdio.h>

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest, final_amount;
 printf("Enter the Principal amount: ");
    scanf("%f", &principal);

    printf("Enter the Annual Interest Rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter the Time period (in years): ");
    scanf("%f", &time);

     simple_interest = (principal * rate * time) / 100;

      final_amount = principal * ((1 + rate / 100), time);
    compound_interest = final_amount - principal;
    printf("\n--- Interest Calculation Results ---\n");
    printf("Principal Amount  : %.2f\n", principal);
    printf("Simple Interest   : %.2f\n", simple_interest);
    printf("Total Amount (SI) : %.2f\n", principal + simple_interest);
    printf("Compound Interest : %.2f\n", compound_interest);
    printf("Total Amount (CI) : %.2f\n", final_amount);
    return 0;
}
