/**
 * es3.c
 * Curso Programando en C
 *
 * Manoel Folgueira <manoel@tutorialesnet.net>
 * http://tutorialesnet.net
 *
 * El fichero es3.c
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {

    double l1, l2;

    printf("Introduzca l1: ");
    scanf("%lf", &l1);

    printf("Introduzca l2: ");
    scanf("%lf", &l2);

    printf("El perímetro del rectángulo es: %.2lf\n", 2*l1 + 2*l2);

    return 0;
}
