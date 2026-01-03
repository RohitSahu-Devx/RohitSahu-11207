#include <stdio.h>

int main() {
    int mat[3][3];
    int sum= 0;
    
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            sum = sum+ mat[i][j];
        }
    }

    printf("Total Sum: %d\n", sum);
    return 0;
}
