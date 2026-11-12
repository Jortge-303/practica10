#include <stdio.h>
#include <string.h>

//Octavo ejercicio (el nombre va en la terminal en la prueba de escritorio)
//Los signos diacriticos y caracteres especiales no los interpreta bien la terminal y se necesitan usar 2 librerias por lo menos para resolver el problema por lo que llas vocales con acento no se registran por si mismas
int main() {
    char nombre[100];
    int jor = 0;

    printf("Analizador de nombres\n");
    printf("Introduce el nombre completo de un integrante (evite signos diacríticos o letras especiales): ");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = '\0';

    int longitud = strlen(nombre);

    printf("\nNombre ingresado: %s\n", nombre);

    for (int i = 0; i < longitud; i++) {
        if (strchr("aeiou", nombre[i]) != NULL) {
            jor++;
        }
    }

    printf("\nTexto al revés: ");
    for (int i = longitud - 1; i >= 0; i--) {
        printf("%c", nombre[i]);
    }
    printf("\n");

    printf("\nLa cantidad total de vocales minúsculas sin acento es: %d\n", jor);

    return 0;
}
