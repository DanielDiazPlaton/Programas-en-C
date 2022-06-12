/******************************************************************************

                             ARRAY TRHOUGH CHARACTERS.
                                Daniel Diaz Platon
                               Sunday May 29, 2022

*******************************************************************************/

#include <stdio.h>

int main(){

    char cadena1[ 20 ]; // reserva 20 caracteres
    char cadena2[] = "literal de cadena"; // reserva 18 caracteres
    int i; // contador

    // Lee la cadena del usuario y la introduce en el arreglo cadena 1
    printf( "Introduce una cadena: " );
    scanf( "%s", cadena1 ); // Entrada finaliza si le metemos un espacio en blanco

    // Muestra las cadenas
    printf( "La cadena1 es: %s\ncadena2 es: %s\n"
            "La cadena con espacios entre caracteres es: \n",
            cadena1, cadena2 );

    // Muestra los caracteres hasta que se encuentra el caracter nulo
    for( i = 0; cadena1[ i ] != '\0'; i++ ){
        printf( "%c ", cadena1[ i ] );
    } // end for

    printf( "\n" );

    return 0;

} // End function main



