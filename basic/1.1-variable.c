/*
    Program: 1-data-types.c
    Author: Fábio Amorim
    Date: 05-01-2020
*/

#include <stdio.h>
#include <stdlib.h>


// global variable
int number=5;

void display(){
    printf("%i\n", number);
}

int main() {

    //local variable

    int n1;
    float n2;

    n1 = 10;
    n2 = 10;

    printf("%i\n", n1);

    printf("%.2f\n", n2);

    display();

    printf("%i\n", number);

    printf("\n\n");
    system("pause");
    return 0;
}