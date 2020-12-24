/*
    Program: 1-data-types.c
    Author: Fábio Amorim
    Date: 24-12-2020
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n1, n2;

    printf("Enter with the first number: \n");
    scanf("%i",&n1);

    printf("Enter with the second number: \n");
    scanf("%i",&n2);

    printf("N1: %i\n", n1);
    printf("N2: %i\n", n2);

    if (n1 > n2) {
        printf("The first number is greater than the second!");
    } else if (n2 > n1) {
        printf("The second number is greater than the first!");
    } else {
        printf("The numbers are equals!");
    }

    printf("\n\n");
    system("pause");
    return 0;
}