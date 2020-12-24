/*
    Program: 1-data-types.c
    Author: Fábio Amorim
    Date: 24-12-2020
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 10 , b = 5;

    printf("%i %i", a, b);
    printf("\n");

    // sum
    printf("Sum = %i", a+b);
    printf("\n");

    // subtraction
    printf("Subtraction = %i", a-b);
    printf("\n");

    // multiplication
    printf("Multiplication = %i", a*b);
    printf("\n");

    // division
    printf("Division = %i", a/b);
    printf("\n");

    printf("\n\n");
    system("pause");
    return 0;
}