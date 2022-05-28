/******************************************************************************

                            ARRAY TRHOUGHT CONSTANT SIMBOL.
                                Daniel Diaz Platon
                               Friday, May 27, 2022

*******************************************************************************/

#include <stdio.h>

#define TAMANIO_RESPUESTAS 40 /* Define tamanio de arreglos */
#define TAMANIO_FRECUENCIA 11

int main()
{
    
    int respuesta;
    int rango;
    
    int frecuencia[ TAMANIO_FRECUENCIA ] = { 0 };
    
    int respuestas[ TAMANIO_RESPUESTAS ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                                             1, 3, 4, 6, 7, 8, 9, 2, 1, 2,
                                             3, 4, 5, 6, 7, 2, 9, 3, 4, 10,
                                             2, 10, 2, 4, 5, 1, 6, 10, 9, 10 };
    
    for(respuesta = 0; respuesta < TAMANIO_RESPUESTAS; respuesta++)
    {
        ++frecuencia[ respuestas[ respuesta ] ]; 
    }
    
    printf( "%s%17s\n", "Rango", "Frecuencia" );
    
    for( rango = 0; rango < TAMANIO_FRECUENCIA; rango++ )
    {
        printf("%6d%17d\n", rango, frecuencia[ rango ]);
    }

    return 0;
}