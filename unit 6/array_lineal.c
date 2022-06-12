/******************************************************************************

                                ARRAY LINEAL FOUND.
                                Daniel Diaz Platon
                               Saturday June 04, 2022

*******************************************************************************/

#include <stdio.h>
#define TAMANIO 100

// Prototipo de la funcion de busqueda
int busquedaLineal( const int arreglo[], int llave, int tamanio );

int main(){

    int a[ TAMANIO ]; // crea arreglo a
    int x; // contador para inicializr los elementos de 0 a 99 del arreglo a
    int llaveBusqueda; // valor para localizar en el arreglo a
    int elemento; // Variable para almacenar la ubicaion de la llave busqueda o -1

    // Crea los datos
    for( x = 0; x < TAMANIO; x++){
        a[ x ] = 2 * x;
    } // End for

    printf( "Introduzca la llave de busqueda entera:\n" );
    scanf( "%d", &llaveBusqueda );

    // Intenta localizar la llaveBusqueda en el arreglo a
    elemento = busquedaLineal( a, llaveBusqueda, TAMANIO );

    // Despliegua los resultados
    if( elemento != -1 ){
        printf( "Encontre el valor en el elemento %d\n", elemento );
    } else{
        printf( "Valor no encontrado\n" );
    } // End if else

    return 0;

} //End main

// Compara la llave con cada elemento del arreglo hasta que localiza el elemento
// o hasta que alcanza el final del arreglo; devuelve el subindice del elemento
int busquedaLineal( const int arreglo[], int llave, int tamanio ){

    int n; // contador

    // Ciclo a traves del arreglo
    for( n = 0; n < tamanio; ++n ){

        if( arreglo[ n ] == llave ){
            return n; // devuelve la ubicacion de la llave
        } // End if inside

    } // En for

    return -1; // llave no encontrada

} // End function busquedaLineal




