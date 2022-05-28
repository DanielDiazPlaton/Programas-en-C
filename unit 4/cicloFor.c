/*
	CICLO FOR CON OPERADORES DE ASIGNACION
*/
#include <stdio.h>

int main()
{
    int suma = 0;
    int numero;
    
    for ( numero = 2; numero <= 100; numero += 2 ){
        suma += numero; // Le suma el numero a la suma
    }
    
    printf("La suma es de %d\n", suma); // muestra la suma

    return 0;
}