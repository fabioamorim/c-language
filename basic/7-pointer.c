#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int x, *px;

    x = 20;

    px = &x;

    printf("Value of x variable: %d\n", x);
    printf("Value of x variable in pointer %d\n", *px);
    printf("Value of memory of x variable: %x\n", &x);
    printf("Value of pointer: %x\n", px);

    printf("\n\n");
    system("pause");
    return 0;
}