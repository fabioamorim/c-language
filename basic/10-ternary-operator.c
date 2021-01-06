/*
    Program: 1-data-types.c
    Author: Fábio Amorim
    Date: 05-01-2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int number = 10;
    bool x;

    x = number >= 10 ? true : false;

    printf("%i", x);

    printf("\n\n");
    system("pause");
    return 0;
}