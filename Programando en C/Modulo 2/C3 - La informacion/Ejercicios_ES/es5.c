/**
 * es5.c
 * Curso Programando en C
 *
 * Manoel Folgueira <manoel@tutorialesnet.net>
 * http://tutorialesnet.net
 *
 * El fichero es5.c
 */

#include <stdio.h>

#define PI 3.1415

int main(int argc, char const *argv[]) {

    float r1, r2, r3;

    printf("Introduzca 3 radios separados por espaciods: ");
    scanf("%f %f %f", &r1, &r2, &r3);

    printf("%5s%12s%8s\n", "RADIO", "PERIMETRO", "AREA");
    printf("%5s%12s%8s\n", "=====", "=========", "=====");

    printf("%5.0f%12.2f%8.2f\n", r1, 2 * PI * r1, PI * r1 * r1);
    printf("%5.0f%12.2f%8.2f\n", r2, 2 * PI * r2, PI * r2 * r2);
    printf("%5.0f%12.2f%8.2f\n", r3, 2 * PI * r3, PI * r3 * r3);

    return 0;
}
