/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int contador = 0;
    int calificacion = 0;
    int total = 0;
    
    float promedio;
    
    printf("Introduzca la calificacion. -1 para terminar: ");
    scanf("%d", &calificacion);
    
    while( calificacion != -1 ){
        total = total + calificacion;
        contador = contador + 1;
        
        printf("Introduzca la calificacion. -1 para terminar: ");
        scanf("%d", &calificacion);
    } // End While
    
    if( contador != 0 ){
        promedio = ( float ) total / contador;
        
        printf("El promedio del grupo es: %.2f\n", promedio);
    } else {
        printf("No se introdujeron calificaciones\n");
    } // End if else
    
    return 0;

}