#include <stdio.h>
int main() {
    printf("\n");
    int p;
    float rate, balance;
    int yr;

    printf("--**Enter Principal Amount: ");
    scanf("%d", &p);

    printf("--**Enter Annual Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("--**Enter Number of Years: ");
    scanf("%d", &yr);
    balance = p;

    for (int i=1; i<=yr; i++) {
        float interest= balance*(rate/100);

        balance= balance+interest;
        printf("Year %d: Balance = %.2f\n", i, balance);
    }

    printf("\nAfter %d years, your final balance is: %.2f\n", yr, balance);

    return 0;
}