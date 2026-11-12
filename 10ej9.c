#include <stdio.h>
//Noveno ejercicio
int main() {
    float ventas[6];
    float suma = 0, promedio;
    float mayor;
    int dia_mayor = 1;
    float meta = 500.0;
    int jor = 0;

    printf("Registro de ventas (6 días)\n");
    for (int i = 0; i < 6; i++) {
        printf("Introduce la venta del %dº día: $", i + 1);
        scanf("%f", &ventas[i]);

        while (ventas[i] < 0) {
            printf("Las ventas deben ser positivas. Intenta de nuevo para el %dº día: $", i + 1);
            scanf("%f", &ventas[i]);
        }

        suma = suma + ventas[i];
    }

    mayor = ventas[0];

    printf("\nLista de ventas por día\n");
    for (int i = 0; i < 6; i++) {
        printf("%dº día: $%.2f\n", i + 1, ventas[i]);

        if (ventas[i] > mayor) {
            mayor = ventas[i];
            dia_mayor = i + 1;
        }
    }

    printf("\nDías que superan la meta de $%.2f:\n", meta);
    for (int i = 0; i < 6; i++) {
        if (ventas[i] > meta) {
            printf("%dº día: $%.2f supera la meta.\n", i + 1, ventas[i]);
            jor++;
        }
    }

    promedio = suma / 6;

    printf("\nEl total de ventas es: $%.2f\n", suma);
    printf("El promedio de ventas es: $%.2f\n", promedio);
    printf("El día de mayor ingreso fue el %dº día con: $%.2f\n", dia_mayor, mayor);
    printf("La cantidad total de días que superan la meta es: %d\n", jor);

    return 0;
}
