/*
 ============================================================================
 Name        : Acumulador.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*1)De 5  personas que ingresan al hospital se deben tomar y
validar los siguientes datos.
la inicial , temperatura, sexo y edad.
a)informar la cantidad de personas de cada sexo.
b)la edad promedio en total
c)la mujer con más temperatura(si la hay)
pedir datos y mostrar los resultados*/

int main() {
	setbuf(stdout,NULL);

	int i;
	int edad;
	int temp;
	char inicial;
	char sexo;
	int contF = 0;
	int contM = 0;
	int acumEdades = 0;
	int promedioEdades = 0;

	int tempMax = 0;
	char mujerMasTemp;

	int flag = 0;

	for(i=1; i<=5; i++){
		do{
			printf("Ingrese su inicial: ");
			fflush(stdin);
			scanf("%c", &inicial);
		}while(!(isalpha(inicial)));

		do{
			printf("Ingrese su temperatura: ");
			fflush(stdin);
			scanf("%d", &temp);
		}while(temp<34 || temp>45);

		do{
			printf("Ingrese su sexo (f para femenino, m para masculino): ");
			fflush(stdin);
			scanf("%c", &sexo);
		}while(!(sexo == 'f' || sexo == 'm'));

		do{
			printf("Ingrese su edad: ");
			fflush(stdin);
			scanf("%d", &edad);
		}while(edad<1 || edad>99);

		if(sexo == 'f'){
			contF++;
			if(flag == 0){
			tempMax = temp;
			mujerMasTemp = inicial;
			flag = 1;
			}else{
				if(tempMax<temp){
					tempMax = temp;
					mujerMasTemp = inicial;
				}
			}

		}else{
			contM++;
		}

		acumEdades= acumEdades+edad;

	}

	promedioEdades = acumEdades/5;
	printf("\n a) Hay %d mujeres y %d hombres \n b) La edad promedio total es %d años \n c) La mujer con más temperatura es %c", contF, contM, promedioEdades, mujerMasTemp);
	return 0;
}
