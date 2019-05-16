/**
 * tipos_de_datos
 * Curso Programando en C
 *
 * Manoel Folgueira <manoel@tutorialesnet.net>
 * http://tutorialesnet.net
 *
 * El fichero tipos_de_datos ejemplifica los tipos de datos
 */

#include <stdio.h>

// declaracion de un tipo enumerado
enum dias_semana_t {Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};

// tipos de usuario
typedef enum dias_semana_t dias_semana2_t;
typedef char edad_t;

int main(int argc, char const *argv[]) {

    // Valores de un enumerado
    printf("Lunes: %d\n", Lunes);
    printf("Martes: %d\n", Martes);
    printf("Miércoles: %d\n", Miercoles);
    printf("Jueves: %d\n", Jueves);
    printf("Viernes: %d\n", (dias_semana2_t) Viernes);
    printf("Sábado: %d\n", Sabado);
    printf("Domingo: %d\n", Domingo);

    // importancia de la declaración de tipos
    printf("%d\n", (edad_t) 17);
    printf("%d\n", (edad_t) (-129));

    // uso simple de sizeof
    printf("%d\n", sizeof(Sabado));

    // sizeof va a ser relevante cuando reservemos memoria en tiempo de ejecucion
    // memoriaReservada = reservar(sizeof(dato) * 10)

    return 0;
}
