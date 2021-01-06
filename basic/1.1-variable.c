/*
    Program: 1-data-types.c
    Author: Fábio Amorim
    Date: 05-01-2021
*/

#include <stdio.h>
#include <stdlib.h>

int x = 5;

void display(){
    printf("%i\n",x);
}

int main(){

    // local variable
    int number = 10;

    printf("%i\n", number);

    display();

    printf("%i\n", x);

    printf("\n\n");
    system("pause");
    return 0;
}