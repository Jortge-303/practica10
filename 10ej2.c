#include <stdio.h>
//Segundo ejercicio (la mínima es 0.0 y la máxima 10 para que sea coherente a esto lo llamo "parámetros reales")
int main() {
    float calificaciones[7];
    float suma = 0, promedio;
    float minima = 6.0;
    int jor = 0;

    printf("Registro de calificaciones\n");
    for (int i = 0; i < 7; i++) {
        printf("Introduce la calificación del %dº alumno: ", i + 1);
        scanf("%f", &calificaciones[i]);

        while (calificaciones[i] < 0 || calificaciones[i] > 10) {
            printf("Calificación no válida. Introduce un valor entre 0 y 10 para el %dº alumno: ", i + 1);
            scanf("%f", &calificaciones[i]);
        }

        suma = suma + calificaciones[i];
    }

    printf("\nLista de calificaciones\n");
    for (int i = 0; i < 7; i++) {
        printf("%dº alumno: %.2f\n", i + 1, calificaciones[i]);
    }

    printf("\nAlumnos aprobados (mínima %.1f):\n", minima);
    for (int i = 0; i < 7; i++) {
        if (calificaciones[i] >= minima) {
            printf("%dº alumno: %.2f está aprobado.\n", i + 1, calificaciones[i]);
            jor++;
        }
    }

    promedio = suma / 7;

    printf("\nEl promedio general del grupo es: %.2f\n", promedio);
    printf("La cantidad total de aprobados es: %d\n", jor);

    return 0;
}
