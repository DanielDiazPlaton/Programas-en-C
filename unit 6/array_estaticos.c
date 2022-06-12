/******************************************************************************

                             ARRAY TRHOUGH STATICS AND AUTOMATICS LOCAL.
                                Daniel Diaz Platon
                               Sunday May 29, 2022

*******************************************************************************/
#include <stdio.h>

void iniciaArregloEstatico( void ); // Prototipo de la funcion
void iniciaArregloAutomatico( void ); // Prototipo de la funcion

int main(){

    printf( "Primera llamada a cada funcion:\n" );
    iniciaArregloEstatico();
    iniciaArregloAutomatico();

    printf( "\n\nSegunda llamada a cada funcion\n" );
    iniciaArregloEstatico();
    iniciaArregloAutomatico();

    return 0;

} // End function main

// Funcion para demostrar un arreglo estatico local
void iniciaArregloEstatico( void ){

    // Inicializa los elementos a 0 la primera vez que se llama a la funcion
    static int arreglo1[ 3 ];
    int i; // contador

    printf( "\nValores al entrar a iniciaArregloEstatico:\n" );

    //muestra el contenido del arreglo1
    for( i = 0; i <= 2; i++ ){
        printf( "arreglo1[ %d ] = %d ", i, arreglo1[ i ] );
    } // End for

    printf( "\nValores al salir de iniciaArregloEstatico:\n" );

    // Se modifica y muestra el contenido de arreglo1
    for( i = 0; i <= 2; i++ ){
        printf( "arreglo1[ %d ] = %d ", i, arreglo1[ i ] += 5 );
    } // End for

} // End function iniciaArregloEstatico

// Funcion para demostrar un arreglo local automatico
void iniciaArregloAutomatico( void ){

    // Inicia los elementos cada vez que se llama a la funcion
    int arreglo2[ 3 ] = { 1, 2, 3 };
    int i; // contador

    printf( "\n\nValores al entrar a iniciaArregloAutomatico: \n" );

    //Muestra el contenido del arreglo2
    for( i = 0; i <= 2; i++){
        printf( "arreglo2[ %d ] = %d ", i, arreglo2[ i ] );
    } // End for

    printf( "\n\nValores al salir a iniciaArregloAutomatico: \n" );

    //Modifica y muestra el contenido del arreglo2
    for( i = 0; i <= 2; i++){
        printf( "arreglo2[ %d ] = %d ", i, arreglo2[ i ] += 5 );
    } // End for

} // End function iniciaArregloAutomatico





