/*
    Program: 1-data-types.c
    Author: Fábio Amorim
    Date: 24-12-2020
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 0;

    // Loop for.
    for(i;i<10;i++) {
        printf("Loop for - Number: %i\n", i);
    }

    i = 0;

    // Loop while.
    while(i<10) {

        printf("Loop while - Number: %i\n", i);
        i++;

    }

    i=0;

    // Loopo do-while.
    do{

        printf("Loop do-while - Number: %i\n", i);
        i++;

    }while(i<10);

    printf("\n\n");
    system("pause");
    return 0;
}