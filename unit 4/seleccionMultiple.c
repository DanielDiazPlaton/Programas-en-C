/********************************************************
 * 
 *              Seleccion multiple en C
 *                 DANIEL DIAZ PLATON
 *                  April 9, 2022
 ********************************************************/

#include <stdio.h>

int main(){

    int calificacion;
    int cuentaA = 0;
    int cuentaB = 0;
    int cuentaC = 0;
    int cuentaD = 0;
    int cuentaF = 0;

    printf("Introduzca la letra que corresponda a la calificacion.\n");
    printf("Introduzca el caracter EOF para finalizar la entrada de los datos.\n");

    /*
        Se repite hasta que el usuario digita la secuencia de teclas
        de fin de archivo
    */
    while ( ( calificacion = getchar() ) != EOF ) { /* La funcion getchar() lee un caracter introducido desde el teclado y lo almacena en la variable entera calificacion. 
                                                        EOF es una constante entera simbolica definida en el encabezado <stdio.h> que significa "fin de archivo". Para windows es (ctrl + z). */
        /* Se determina cual calificacion se introdujo */
        switch (calificacion)
        {
            case 'A': /* Si no tiene un break, se ejecuta todos los case consecuentes. */
            case 'a':
                ++cuentaA; /* Incrementa cuentaA*/
                break; /* Break ocaciona que el programa proceda con la primera instruccion despues de switch */
            case 'B':
            case 'b':
                ++cuentaB; /* Incrementa cuentaA*/
                break;
            case 'C':
            case 'c':
                ++cuentaC; /* Incrementa cuentaA*/
                break;
            case 'D':
            case 'd':
                ++cuentaD; /* Incrementa cuentaA*/
                break;
            case 'F':
            case 'f':
                ++cuentaF; /* Incrementa cuentaA*/
                break;
            case '\n':
            case '\t':
            case ' ':
                break;
            
            default: /* Atrapa todos los demas caracteres */
                printf( "Introdujo una letra incorrecta.\n" );
                printf( "Introduzca una nueva calificacion.\n" );
                break; /* Opcional; de todas maneras saldra del switch*/
        } // End switch
        
    } // End while

        printf( "\nLos totales por calificacion son:\n" );
        printf( "A: %d\n", cuentaA ); /* despliega calificacion de A*/
        printf( "B: %d\n", cuentaB ); /* despliega calificacion de B*/
        printf( "C: %d\n", cuentaC ); /* despliega calificacion de C*/
        printf( "D: %d\n", cuentaD ); /* despliega calificacion de D*/
        printf( "F: %d\n", cuentaF ); /* despliega calificacion de F*/
    
    return 0; /* Terminacion exitosa del programa */   

} // End function Main


