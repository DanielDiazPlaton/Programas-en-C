/******************************************************************************

                                ARRAY BINARIA FOUND.
                                Daniel Diaz Platon
                               Saturday June 04, 2022

*******************************************************************************/


#include <stdio.h>
#define TAMANIO 15

// Prototipos de las funciones
int busquedaBinaria( const int b[], int claveBusqueda, int bajo, int alto );
void despliegaEncabezado( void );
void depliegaLinea( const int b[], int bajo, int medio, int alto );

int main(){

    int a[ TAMANIO ]; // Crea el arreglo a
    int i; // contador para inicializar los elementos de 0 a 14 del arreglo a
    int llave; // valor a localizar en el arreglo a
    int resultado; // variable para almacenar la ubicacion de la llave o -1

    // Crea los datos
    for( i = 0; i < TAMANIO; i++ ){
        a[ i ] = 2 * i;
    } // End for

    printf( "Introduzca un numero entre 0 y 28: " );
    scanf( "%d", &llave );

    despliegaEncabezado();

    // Busca la llave en el arreglo a
    resultado = busquedaBinaria( a, llave, 0, TAMANIO - 1 );

    // despliega los resultados
    if( resultado != -1 ){
        printf( "\n%d se encuentra en el elemento %d del arreglo\n", llave,
        resultado );
    } else {
        printf( "\n%d no se encuentra\n", llave );
    } // End if else

    return 0; // Terminacion exitosa

} // End main
 
// Funcion para realizar la busqueda binaria en un arreglo
int busquedaBinaria( const int b[], int claveBusqueda, int bajo, int alto ){

    int central; // variable para mantener el elemento central del arreglo

    // realiza el ciclo hasta que se subindice bajo es mayor que el indice
    while( bajo <= alto ){

        // Determina el elemento central del subarreglo en el que se busca
        central = ( bajo + alto ) / 2;

        // despliega el subarreglo utilizado en este ciclo
        depliegaLinea( b, bajo, central, alto );

        // si claveBusqueda coincide con el elemento central, devuelve central
        if( claveBusqueda == b[ central ] ){
            return central;
        } // End if

        // si claveBusqueda es menor que el elemento central, establece
        // el nuevo valor de alto
        else if( claveBusqueda < b[ central ] ){
            alto = central -1; // busca en la mitad inferior del arreglo
        } // End if
        // si claveBusqueda es mayor que el elemento central, establece el nuevo 
        // valor para bajo
        else{
            bajo = central + 1; // busca en la mitad superior del arreglo
        } // End else

    } // End while

    return -1; // no se encontro calveBusqueda

} // End function busquedaBinaria

// Imprime un encabezado para la salida
void despliegaEncabezado( void ){

    int i; // contador

    printf( "\nSubindices:\n" );

    // muestra el encabezado columna
    for( i = 0; i < TAMANIO; i++ ){
        printf( "%3d ", i );
    } // End for

    printf( "\n" );

    // muestra una linea de caracteres - 
    for( i = 1; i <= 4 * TAMANIO; i++ ){
        printf( "-" );
    } // End for

    printf( "\n" ); // inicia nueva linea

} // End function despliegaEncabezado

// Imprime una linea de salida que muestra la parte actual del arreglo que
// se esta procesando
void depliegaLinea( const int b[], int bajo, int central, int alto ){
    
    int i; // contador

    // ciclo for a traves del arreglo completo
    for( i = 0; i < TAMANIO; i++ ){

        // despliega espacions si se encuentra fuera del rango actual
        // del subarreglo
        if( i < bajo || i > alto ){
            printf( "    " );
        } // End if
        else if( i == central ){
            printf( "%3d*", b[ i ] ); // marca el valor central
        } // End if
        else{
            printf( "%3d ", b[ i ] );
        } // End else

    } // End for

    printf( "\n" );

} // End function despliegaLinea






