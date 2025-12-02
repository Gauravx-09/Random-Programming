
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

   printf("AND: %d\n", a & b);
    printf("OR: %d\n", a | b);
   
    printf("XOR: %d\n", a ^ b);
    printf("NOT a: %d\n", ~a);
    printf("NOT b: %d\n", ~b);

    return 0;
}

