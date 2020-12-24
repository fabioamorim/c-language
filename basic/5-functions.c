/*
    Program: 1-data-types.c
    Author: Fábio Amorim
    Date: 24-12-2020
*/

#include <stdio.h>
#include <stdlib.h>


// This function has not return.
void hello_world() {
    printf("Hello Word!\n");
}

// This function has return.
int has_return() {
    return 1;
}

// This function has parameters and sum.
void has_parameters(int a, int b) {
    printf("Sum: %i + %i = %i\n",a,b,(a+b));
}

// This function has return and parameters.
int has_parameters_returns(int a, int b) {
    int sum = a + b;

    return sum;
}

void pass_array(int *vnumbers) {
    int i = 0;
    for(i;i<10;i++) {
        printf("%i\n", vnumbers[i]);
    }
}

int main() {

    hello_world();
    printf("Function that has return and parameters: %i\n", has_parameters_returns(55,23));

    int numbers[10] = {10,20,30,40,50,60,70,80,90,100};

    pass_array(numbers);

    printf("\n\n");
    system("pause");
    return 0;
}