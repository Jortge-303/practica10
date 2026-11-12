#include <stdio.h>
//Primer ejercicio
int main() {
    int numeros[8];
    int jor = 0; 

    printf("El registro numérico\n");
    for (int i = 0; i < 8; i++) {
        printf("Introduce el %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\n La lista\n");
    for (int i = 0; i < 8; i++) {
        printf("%dº número: %d\n", i + 1, numeros[i]);
    }

    printf("\nPasan el filtro de pares:\n");
    for (int i = 0; i < 8; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%dº número: %d cumple con el filtro.\n", i + 1, numeros[i]);
            jor++;
        }
    }

    printf("\nLa cantidad total de elementos que pasan el filtro es: %d\n", jor);

    return 0;
}
