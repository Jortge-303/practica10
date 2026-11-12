#include <stdio.h>
//Décimo ejercicio
int main() {
    int numeros[10];
    int positivos = 0;
    int negativos = 0;
    int ceros = 0;
    int jor = 0;

    printf("Clasificación de números (10 elementos)\n");
    for (int i = 0; i < 10; i++) {
        printf("Introduce el %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nLista de números registrados\n");
    for (int i = 0; i < 10; i++) {
        printf("%dº número: %d\n", i + 1, numeros[i]);

        if (numeros[i] > 0) {
            positivos++;
        } else if (numeros[i] < 0) {
            negativos++;
        } else {
            ceros++;
        }
    }

    printf("\nElementos dentro del intervalo de -3 a 3:\n");
    for (int i = 0; i < 10; i++) {
        if (numeros[i] >= -3 && numeros[i] <= 3) {
            printf("%dº número: %d está dentro del intervalo.\n", i + 1, numeros[i]);
            jor++;
        }
    }

    printf("\nResultados de la clasificación:\n");
    printf("Cantidad de números positivos: %d\n", positivos);
    printf("Cantidad de números negativos: %d\n", negativos);
    printf("Cantidad de ceros: %d\n", ceros);
    printf("Cantidad de elementos en el intervalo [-3 a 3]: %d\n", jor);

    return 0;
}
