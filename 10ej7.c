#include <stdio.h>
//Séptimo ejercicio
int main() {
    int numeros[9];
    int umbral = 25;
    int jor = 0;

    printf("Registro numérico (9 elementos)\n");
    for (int i = 0; i < 9; i++) {
        printf("Introduce el %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nArreglo original\n");
    for (int i = 0; i < 9; i++) {
        printf("%dº número: %d\n", i + 1, numeros[i]);
    }

    printf("\nRecorrido en orden inverso (mayores a %d):\n", umbral);
    for (int i = 8; i >= 0; i--) {
        if (numeros[i] > umbral) {
            printf("%dº número: %d cumple con el filtro.\n", i + 1, numeros[i]);
            jor++;
        }
    }

    printf("\nHay %d elementos mayores a: %d\n", umbral, jor);

    return 0;
}
