/*
    Daniel Diaz Platon
*/
#include <stdio.h>

int main()
{
    int entero1; // primer numero que introducira el usuario
    int entero2; // segundo numero que introducira el usuario
    int suma;  // variable donde se realizara la suma


     /*
        Ingresa los datos y los almacena en las variables
        El % es un especificador de conversion
        El & es un operador de direccion
    */
    printf("Introduzca el primer numero\n");
    scanf("%d", &entero1);

    printf("Introduzca el segundo numero\n");
    scanf("%d", &entero2);

    // Realiza la suma
    suma = entero1 + entero2; 

    /*
        Imprime la suma
        El % es un especificador de conversion
    */
    printf("La suma es %d\n", suma);  

    return 0;

} // End function Main