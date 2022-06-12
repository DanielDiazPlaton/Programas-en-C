/******************************************************************************

                    CONVERTION LETTERS MINUSCULE TO MAYUSCULE
                                Daniel Diaz Platon
                               Saturday June 11, 2022

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>

void convierteAMayusculas( char *ptrS );        // Prototipo

int main(){

    char cadena[] = "caracteres y $32.98";  // inicializa char arreglo

    printf( "La cadena antes de la conversion es: %s\n", cadena );

    /*int i;
    for(  i = 0; i < 20; i++ ){
        printf( "%p\n", &cadena[i] );
    }  // End for */

    convierteAMayusculas( cadena );

    printf( "\nLa cadena despues de la conversion es: %s\n", cadena );

    return 0;

}  // End main

// Convierte una cadena a las letras mayusculas
void convierteAMayusculas( char *ptrS ){

    while( *ptrS != '\0' ){  // El caracter actuakl no es '\0'

        if( islower( *ptrS ) ){  // si el caracter es minuscula
            *ptrS = toupper( *ptrS );  // Lo convierte a mayuscula
        } // End if

        ++ptrS;  // mueve ptrS al siguiente caracter

    } // End while

}  // End function convierteAMayusculas





