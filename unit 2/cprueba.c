/*
	DANIEL DIAZ PLATON 
	OPERADORES DE IGUALDAD Y RELACION EN C
*/

#include <stdio.h>

int main (){

   int num1;
   int num2;

   printf("Introduzca dos numeros y le dire la relacion");
   printf("\nque tienen: ");

   scanf( "%d%d", &num1, &num2 );

   if( num1 == num2 ){
      printf(" %d es igual que %d\n", num1, num2);
   } // END IF

   if( num1 != num2 ){
      printf(" %d es diferente que %d\n", num1, num2);
   } // END IF

   if( num1 >= num2 ){
      printf(" %d es mayor o igual que %d\n", num1, num2);
   } // END IF

   if( num1 <= num2 ){
      printf(" %d es menor o igual que %d\n", num1, num2);
   } // END IF

   if( num1 > num2 ){
      printf(" %d es mayor que %d\n", num1, num2);
   } // END IF

   if( num1 < num2 ){ // printf("%s", num1 < num2 ? "Es menor" : "Es mayor" );
      printf(" %d es menor que %d\n", num1, num2);
   } // END IF

} // END MAIN

