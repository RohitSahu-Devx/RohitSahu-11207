#include <stdio.h>
int main() {
    char operate; 
    int a, b;
    scanf("%d %d", &a, &b);
    scanf(" %c", &operate);

    switch(operate) {
        case '+': printf("Sum = %d", a+b);
        break;
        case '-': printf("Subtract = %d", a-b);
        break;
        case '*': printf("Product = %d", a*b);
        break;
        case '/': printf("Quotient = %d", a/b);
        break;
        case '%': printf("Remainder = %d", a%b);
        break;
        default: printf("Error");
    }

    return 0;
}