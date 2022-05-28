/******************************************************************************

                            Online C Compiler.
                POSINCREMENTO, PREINCREMENTO, POSTDECREMENTO, PREDECREMENTO

*******************************************************************************/

#include <stdio.h>

int main()
{
    int c = 05;
    
    printf("%d\n", c);
    printf("%d\n", c++); // POSINCREMENTO
    printf("%d\n\n", c);
    
    c = 5;
    printf("%d\n", c);
    printf("%d\n", ++c); // PREINCREMENTO
    printf("%d\n\n", c);
    
    c = 5;
    printf("%d\n", c *= 5);
    printf("%d\n", c /= 5); 
    printf("%d\n", c %= 5); // Modulo
    
    return 0;

}