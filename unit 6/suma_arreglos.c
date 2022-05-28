/******************************************************************************

                            ARRAY TRHOUGHT CONSTANT SIMBOL.
                                Daniel Diaz Platon
                               Friday, May 27, 2022

*******************************************************************************/

#include <stdio.h>

#define TAMANIO 12

int main()
{
    
    int s[TAMANIO] = { 2,4,6,7,8,9,12,13,43,24,45,12 };
    int j; // Contador
    int total = 0;
    
    for(j = 0; j < TAMANIO; j++)
    {
        total += s[ j ];
    }
    
    printf( "El total de la suma del arreglo es %d\n", total );

    return 0;
}