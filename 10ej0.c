#include <stdio.h>

int main(void) {
    int a;
    float b;
    double c;
    char d;

    int A[] ={1, 2, 3, 4};

    printf("El tamaño del entero es: %zu bytes\n", sizeof (a));
    printf("El tamaño del float es: %zu bytes\n", sizeof (b));
    printf("El tamaño del double es: %zu bytes\n", sizeof (c));
    printf("El tamaño del arreglo es: %zu bytes\n", sizeof (d));
    printf("El tamaño del elemento del arreglo arreglo es: %zu bytes\n", sizeof (A [0]));
    return 0;
}