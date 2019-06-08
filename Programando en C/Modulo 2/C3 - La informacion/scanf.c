/**
 * scanf.c
 * Curso Programando en C
 *
 * Manoel Folgueira <manoel@tutorialesnet.net>
 * http://tutorialesnet.net
 *
 * El fichero scanf.c muestra cómo usar scanf
 */
#include <stdio.h>

int main(int argc, char const *argv[]) {

    // Ejemplo 1: Pedir 2 enteros
    int a, b;

    printf("Por favor, introduzca dos números separados por un espacio: ");
    scanf("%d %d", &a, &b);

    printf("La suma de los dos números facilitados (%d + %d) es %d\n", a, b, a+b);

    // Ejemplo 2: fflush(stdin)
    char ca, cb;

    printf("Introduzca dos caracteres:\n");

    scanf("%c", &ca);
    fflush(stdin);
    scanf("%c", &cb);

    printf("%c", ca);
    printf("%c", cb);

    return 0;
}
