/*
    Program: 1-data-types.c
    Author: Fábio Amorim
    Date: 24-12-2020
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int vetor[5] = {1,2,3,4,5};
    int matriz[3][3];
    int i,j;

    for(i=0;i<5;i++){
        printf("Loop number: %i\n",vetor[i]);
    }

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            matriz[i][j] = i;
        }
    }

    // Check the matriz.
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("Matriz number: %i\n", matriz[i][j]);
        }
    }

    printf("\n\n");
    system("pause");
    return 0;
}