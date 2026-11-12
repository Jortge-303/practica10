#include <stdio.h>
//Cuarto ejercicio, tiene "parámetros reales"
int main() {
    float temperaturas[7];
    float suma = 0, promedio;
    float mayor, menor;
    float referencia = 30.0;
    int jor = 0;

    printf("Registro de temperaturas de Múnich\n");
    for (int i = 0; i < 7; i++) {
        printf("Introduce la temperatura del %dº día: ", i + 1);
        scanf("%f", &temperaturas[i]);

        while (temperaturas[i] < -25 || temperaturas[i] > 40) {
            printf("Temperatura no real, las temperaturas historicas estan entre -25º y 40º, intenta de nuevo: ");
            scanf("%f", &temperaturas[i]);
        }

        suma = suma + temperaturas[i];
    }

    mayor = temperaturas[0];
    menor = temperaturas[0];

    printf("\nLista de temperaturas en Múnich\n");
    for (int i = 0; i < 7; i++) {
        printf("%dº día: %.1fº\n", i + 1, temperaturas[i]);

        if (temperaturas[i] > mayor) {
            mayor = temperaturas[i];
        }
        if (temperaturas[i] < menor) {
            menor = temperaturas[i];
        }
    }

    printf("\nDías que superan los %.1fº:\n", referencia);
    for (int i = 0; i < 7; i++) {
        if (temperaturas[i] > referencia) {
            printf("%dº día: %.1fº supera la referencia.\n", i + 1, temperaturas[i]);
            jor++;
        }
    }

    promedio = suma / 7;

    printf("\nLa temperatura mayor es: %.1fº\n", mayor);
    printf("La temperatura menor es: %.1fº\n", menor);
    printf("El promedio de temperatura es: %.2fº\n", promedio);
    printf("La cantidad total de días que superan los %.1fº es: %d\n", referencia, jor);

    return 0;
}
