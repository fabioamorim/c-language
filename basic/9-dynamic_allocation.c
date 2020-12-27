/*
    Program: 1-data-types.c
    Author: Fábio Amorim
    Date: 27-12-2020
*/

#include <stdio.h>
#include <stdlib.h>

void fills_array(int *array, int size_array){
    int i = 0;

    for(i;i<size_array;i++){
        printf("Enter with a number: ");
        scanf("%d", &array[i]);
    }
}

int main(void) {

    int *n;
    int size_array, i;

    printf("Enter with array size: ");
    scanf("%d", &size_array);

    n = (int *)malloc(size_array * sizeof(int));

    fills_array(n, size_array);
    
    for(i=0;i<size_array;i++){
        printf("Value: %d\n", n[i]);
    }

    printf("\n\n");
    system("pause");
    return 0;
}