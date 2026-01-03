#include <stdio.h>
int main() {
    int mat[5];
    for(int i=0; i<5; i++) {
        scanf("%d", &mat[i]);
    }
    for(int i=0; i<5; i++) {
        printf("%d ", mat[i]);
    }
    return 0;
}