#include <stdio.h>
//Tercer ejercicio
int main() {
    float precios[5];
    float suma = 0;
    float limite = 200.0;
    int jor = 0;

    printf("Registro de precios - Cafetería Braun\n");
    for (int i = 0; i < 5; i++) {
        printf("Introduce el precio del %dº producto: $", i + 1);
        scanf("%f", &precios[i]);

        while (precios[i] < 0) {
            printf("Precio no válido. Introduce un valor positivo para el %dº producto: $", i + 1);
            scanf("%f", &precios[i]);
        }

        suma = suma + precios[i];
    }

    printf("\nLista de precios en Braun\n");
    for (int i = 0; i < 5; i++) {
        printf("%dº producto: $%.2f\n", i + 1, precios[i]);
    }

    printf("\nProductos que superan los $%.2f:\n", limite);
    for (int i = 0; i < 5; i++) {
        if (precios[i] > limite) {
            printf("%dº producto: $%.2f supera el límite.\n", i + 1, precios[i]);
            jor++;
        }
    }

    printf("\nLa suma total de los productos es: $%.2f\n", suma);
    printf("La cantidad total de productos que superan el límite es: %d\n", jor);

    return 0;
}
