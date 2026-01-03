#include <stdio.h>
int main() {
    int array[]= {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int num;
    scanf("%d", &num);
    int found=0;

    for(int i=0; i<8; i++) {
        if(array[i]==num) {
            printf("Found");
            found++;
            break;
        }
    }
    if(found==0) {
        printf("Not found");
    }

    return 0;
}