#include <stdio.h>
#include <string.h>
int main() {
    char s1[20] = "Hello", s2[20] = "World";
    printf("Length: %lu\n", strlen(s1));
    strcat(s1, s2);
         
    printf("Concatenated: %s\n", s1);
    if(strcmp(s1, s2) == 0) {
        printf("Equal");
     } else {
        printf("Not Equal");
     }
    return 0;
}