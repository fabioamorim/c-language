/*
    Program: 1-data-types.c
    Author: Fábio Amorim
    Date: 24-12-2020
*/

#include <stdio.h>
#include <stdlib.h> 

int main() {

    int a = 200;
    float b = 200.5;
    char c[] = "Hello World";
    char d = 'f';

    printf("\nInteger: %i", a);
    printf("\nFloat: %f", b);
    printf("\nDouble: %d", a);
    printf("\nOct: %o", a);
    printf("\nHexa: %x", a);
    printf("\nChar: %c", d);
    printf("\nString: %s", c);

    printf("\n\n");    
    system("pause");
    return 0;
}