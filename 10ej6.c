#include <stdio.h>
//Sexto ejercicio
int main() {
    int numeros[10];
    int buscado;
    int jor = 0;

    printf("Buscador de números\n");
    for (int i = 0; i < 10; i++) {
        printf("Introduce el %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nLista de números capturados\n");
    for (int i = 0; i < 10; i++) {
        printf("%dº número: %d\n", i + 1, numeros[i]);
    }

    printf("\nIntroduce el número que deseas buscar dentro del arreglo: ");
    scanf("%d", &buscado);

    printf("\nResultados de la búsqueda:\n");
    for (int i = 0; i < 10; i++) {
        if (numeros[i] == buscado) {
            printf("El número %d aparece en la %dº posición.\n", buscado, i + 1);
            jor++;
        }
    }

    if (jor > 0) {
        printf("\nEl número %d sí aparece en el arreglo (%d veces en total).\n", buscado, jor);
    } else {
        printf("\nEl número %d no aparece en el arreglo.\n", buscado);
    }

    return 0;
}
