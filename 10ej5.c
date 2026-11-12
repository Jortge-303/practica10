#include <stdio.h>
//Quinto ejercicio, tiene "parámetros reales"
int main() {
    int edades[8];
    int jor = 0;
    int intervalo = 0;

    printf("Registro de edades del equipo\n");
    for (int i = 0; i < 8; i++) {
        printf("Introduce la edad del %dº integrante: ", i + 1);
        scanf("%d", &edades[i]);

        while (edades[i] < 0 || edades[i] > 110) {
            printf("Edad no realista, introduce una edad entre 0 y 110 para el %dº integrante: ", i + 1);
            scanf("%d", &edades[i]);
        }
    }

    printf("\nLista de edades del equipo\n");
    for (int i = 0; i < 8; i++) {
        printf("%dº integrante: %d años\n", i + 1, edades[i]);
    }

    printf("\nIntegrantes mayores o iguales a 18 años:\n");
    for (int i = 0; i < 8; i++) {
        if (edades[i] >= 18) {
            printf("%dº integrante: %d años es mayor de edad.\n", i + 1, edades[i]);
            jor++;
        }
    }

    printf("\nIntegrantes en el intervalo de 20 a 40 años:\n");
    for (int i = 0; i < 8; i++) {
        if (edades[i] >= 20 && edades[i] <= 40) {
            printf("%dº integrante: %d años está dentro del intervalo.\n", i + 1, edades[i]);
            intervalo++;
        }
    }

    printf("\nLa cantidad total de mayores de edad 18+ es: %d\n", jor);
    printf("La cantidad total de integrantes entre 20 y 40 años es: %d\n", intervalo);

    return 0;
}
