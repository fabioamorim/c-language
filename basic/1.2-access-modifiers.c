/*
    Program: 1-data-types.c
    Author: Fábio Amorim
    Date: 17-01-2021
*/

#include <stdio.h>
#include <stdlib.h>


int main() {

    const float pi = 3.14;

    printf("%f", pi);

    // If you try to change the pi's value, you get an error.
    // pi = 3.14159; 

    printf("\n\n");
    system("pause");
    return 0;
}