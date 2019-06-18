/**
 * es2
 * Curso Programando en C
 *
 * Manoel Folgueira <manoel@tutorialesnet.net>
 * http://tutorialesnet.net
 *
 * El fichero es2
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {

    float base, altura;

    printf("Introduzca la base: ");
    scanf("%f", &base);

    printf("Introduzca la altura: ");
    scanf("%f", &altura);

    printf("La altura del triangulo es: %.2f\n", base * altura);

    return 0;
}
