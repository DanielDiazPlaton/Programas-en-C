/******************************************************************************

                            CALCULO DE TASA DE INTERES
			                	DANIEL DIAZ PLATON

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    double monto; // monto del deposito
    double principal = 1000; // monto principal del deposito
    double tasa = .05; // tasa anual
    int anio; // contador de anios
    
    // Muestra el encabezado de la salida de la tabla
    printf( "%4s%21s\n", "Anio", "Monto del deposito" );
    
    // calcula el monto del deposito por cada uno de los anios
    for ( anio = 1; anio <= 10; anio++ ){
        
        // calcula el nuevo monto para el anio especificado
        monto = principal * pow( 1 + tasa, anio );
        
        //  muestra una linea de la tabla
        printf( "%4d%21.2f\n", anio, monto );
        
    } // fin de for
    
    return 0; // indica terminacion de programa
}