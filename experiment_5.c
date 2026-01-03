#include <stdio.h>

int main() {
    int num = 207;
    float dnum = 10.5566;
    double ddnum = 98.765432;
    char Character = 'A';
    
    printf("--**Data Types & Format Specifiers**--\n");

    printf("Integer (int): %d \n", num);
    printf("Float (float): %f \n", dnum);
    printf("Float with precision (%%.2f): %.2f \n", dnum);
    printf("Double (double): %lf \n", ddnum);
    printf("Character (char): %c \n", Character);

    return 0;
}