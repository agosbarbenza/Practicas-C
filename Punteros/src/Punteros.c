/*
 ============================================================================
 Name        : Punteros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*Definir dos variables enteras y no inicializarlas.
Definir una variable puntero a entero, hacer que apunte sucesivamente a las dos variables enteras definidas previamente y cargue sus contenidos.
Imprimir las dos variables enteras.*/

int main(void) {
	setbuf(stdout,NULL);
	int x;
	int y;
	int *pe; //Definimos una variable puntero a entero
	pe = &x; //Almacenamos en la variable puntero la dirección de la variable x
	*pe = 100; //Modificamos el contenido de x accediendo a su contenido mediante el puntero pe
	pe = &y;
	*pe = 200;
	 printf("Primer variable entera:%i\n",x);
	 printf("Segunda variable entera:%i\n",y);
	return 0;
}

/*=========OTRO EJERCICIO========*/

/* #include <stdio.h>
#include <stdlib.h>

 *
 * La variable "pe" puede almacenar la dirección de una variable entera, cuando hacemos la asignación:
   pe=&valor1;
 *
 * */



 /* int main(void) {
		setbuf(stdout,NULL);
		 char c1='A';
		 char c2='B';
		 char *pc; //creo variable puntero
		 pc=&c1; // asigno a la variable puntero la dirección de memoria de c1
		 printf("%c\n",c1); //se imprime: 'A'
		 *pc='a'; //modifico el contenido de c1 mediante el puntero *pc
		 printf("%c\n",c1); //se imprime: 'a'
		 c1='Z';
		 printf("%c\n",*pc); //se imprime: 'Z'
		 pc=&c2;
		 printf("%c\n",*pc); //se imprime: 'B'
		 return 0;
	} */
/*=======================================*/
