/******************************************************************************

                                USES OPERATOR & y *
                                Daniel Diaz Platon
                               Saturday June 11, 2022

*******************************************************************************/

#include <stdio.h>


int main(){

    int a;                               // a es un entrero
    int *ptrA;                           // ptrA es un apuntador a un entero

    a = 7;
    ptrA = &a;                          // ptrA toma la direccion de a

    printf( "La direccion de a es %p"
            "\nEl valor de ptrA es %p", &a, ptrA );

    printf( "\n\nel valor de a es %d"
            "\nEl valor de *ptrA es %d", a, *ptrA );

    printf( "\n\nMuestra de que * y & son complementos "
            "uno del otro\n&*ptrA = %p"
            "\n*&ptrA = %p\n", &*ptrA, *&ptrA );

    return 0;

} // End main




