/*
 ============================================================================
 Name        : Arrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*
==================NOTAS DE LA CLASE========================

Si quiero asignar el valor de un array a una variable:

int *p;
int edades[6];
int num;

num = edades [3];

*p = edades[];
//////Si no le pongo los corchetes hace referencia
a la direccion de memoria del primer elemento del
array.
/////Si le quiero poner un valor a un elemento de un array:
 * edades[1] = 2; //a la posicion 1 del array le doy valor 2

	printf("Ingrese un numero");
	scanf("%d", &v[pos]) --> Le digo que guarde ese numero -que va a ser la posicion- en el array)

	///// en el prototipo:
	 * void inicializar (int edades[], float sueldos[], int tamanio)
 	 	le paso la direccion de memoria de donde arranca el array, y le paso el tamaño
 	 	del array

 =====================================================================================
 */


#define MAX 3

void inicializar(int legajos[], int edades[], float sueldos[], int tamanio);
void pedirDatos(int legajos[], int edades[], float sueldos[], int tamanio);
void sueldoPromedio(float sueldos[], int tamanio);
void mostrarEmpleados(int legajos[], int edades[], float sueldos[], int tamanio);


int main(void) {
	setbuf(stdout,NULL);
	int legajos[MAX];
	int edades[MAX];
	float sueldos[MAX];

	inicializar(legajos, edades, sueldos, MAX);
	pedirDatos(legajos, edades, sueldos, MAX);
	sueldoPromedio(sueldos,MAX);
	mostrarEmpleados(legajos, edades, sueldos, MAX);

	return EXIT_SUCCESS;
}

void inicializar(int legajos[], int edades[], float sueldos[], int tamanio){
	int i;
	for(i = 0; i<tamanio; i++){
		legajos[i]=0;
		edades[i]=0;
		sueldos[i]=0;
	}
}

void pedirDatos(int legajos[], int edades[], float sueldos[], int tamanio){
	int i;
	int numLegajo = 0;

	for(i = 0; i<tamanio; i++){
		do{
			printf("\nIngrese la posición del array: \n"); //pedir posición del array
			fflush(stdin);
			scanf("%d", &legajos[i]); //guardo ese numero en la posición del array...
		}while(legajos[i]<0 || legajos[i]>100);
			numLegajo = legajos[i]+1; //... pero el numero de legajo va a ser igual a la posicion del array + 1;
		do{
			printf("Ingrese una edad: \n");
			fflush(stdin);
			scanf("%d", &edades[i]);
		}while(edades[i]<18 || edades[i]>100);
		do{
			printf("Ingrese un sueldo: \n");
			fflush(stdin);
			scanf("%f", &sueldos[i]);
		}while(sueldos[i]<0);
			printf("Se ingresó el legajo %d, la edad %d y el sueldo %.2f", numLegajo, edades[i], sueldos[i]);

	}

}

void sueldoPromedio(float sueldos[], int tamanio){
	int i;
	float promedio = 0;
	float acumSueldos = 0;
	int contador = 0;

	for(i = 0; i<tamanio; i++){
		acumSueldos = acumSueldos+sueldos[i];
		contador++;
	}
	promedio = acumSueldos/contador;
	printf("\n El promedio de todos los sueldos es %.2f", promedio);
}

void mostrarEmpleados(int legajos[], int edades[], float sueldos[], int tamanio){
	int i;
	int id = 0;
	for (i = 0; i<tamanio; i++){
		id = id+1;
		printf("\n Empleado N° %d: Legajo: %d Edad: %d Sueldo: %.2f ", id, legajos[i], edades[i], sueldos[i]);
	}
}
