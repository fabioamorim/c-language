/*
    Program: 1-data-types.c
    Author: Fábio Amorim
    Date: 26-12-2020
*/

#include <stdio.h>
#include <stdlib.h>

void sum(int *n1, int *n2, int *result) {

    *result = *n1 + *n2;
}

int main(void) {

    int n1, n2, result;

    printf("Enter with the first number: ");
    scanf("%d",&n1);
    
    printf("Enter with the second number: ");
    scanf("%d",&n2);

    sum(&n1, &n2, &result);

    printf("The sum between %d and %d is %d",n1, n2, result);
    
    printf("\n\n");
    system("pause");
    return 0;

}