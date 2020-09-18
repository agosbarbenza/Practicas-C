/*
 ============================================================================
 Name        : Condicionales.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*Realizar un Menú que muestre las opciones:

 a-Saludar
 b-Brindar
 c-Despedirse
 d-Salir

 Nota:
 -Antes de salir preguntar si "esta seguro que desea salir?"
 -Si Brinda sin haber saludado, debe avisar "Debe saludar antes de Brindar" y no deja continuar
 -Si se despide antes de saludar debe avisar "Debe saludar antes de Brindar" y no deja continuar
 -Si se despide antes de brindar debe avisar "Debe brindar antes de despedirse" y no deja continuar
 */

int main() {
	setbuf(stdout, NULL);
	char opcion;
	char rta;
	int saludar = 0;
	int brindar = 0;
	do {
		printf(
				"\n Ingrese una opción: \n a-Saludar \n b-Brindar \n c-Despedirse \n d-Salir: ");
		fflush(stdin);
		scanf("%c", &opcion);
		switch (opcion) {
		case 'a':
			saludar = 1;
			printf("\n Hola!");
			break;
		case 'b':
			if (saludar == 1) {
				printf("\n Chin chin!");
				brindar = 1;
			} else {
				printf("\n Debe saludar antes de brindar D:");
			}
			break;
		case 'c':
			if (saludar == 1 && brindar == 1) {
				printf("\n Adiós!");
				saludar = 0;
				brindar = 0;
			} else {
				printf("\n Debe brindar antes de irse D:");
			}
			break;
		case 'd':
			printf("\n Está seguro que desea salir? :( s/n");
			fflush(stdin);
			scanf("%c", &rta);
			break;
		default:
			printf("\n Ingrese una opción válida");
			break;
		}
	} while (rta != 's');
	return 0;
}

/*
 do {
 printf("\n Ingrese una opcion:\n a-Saludar\n b-Brindar\n c-Despedirse\n d-Salir ");
 opcion = getchar();

 switch (opcion) {
 case 'a':
 system("cls");
 printf("\n Hola!\n");
 saludar = 1;
 system("pause");
 break;

 case 'b':
 if (saludar != 1) {
 system("cls");
 printf("\n Debe saludar antes de brindar! \n");
 system("pause");
 } else {
 system("cls");
 printf("\n Chin chin\n");
 brindar = 1;
 system("pause");
 }
 break;

 case 'c':
 if (!(saludar == 1 && brindar == 1)) {
 system("cls");
 printf("\n Debe brindar antes de despedirse!\n ");
 system("pause");
 } else {
 system("cls");
 printf("\n Chau!\n");
 brindar = 0;
 saludar = 0;
 system("pause");
 }
 break;


 case 'd':
 system("cls");
 printf("Está seguro que desea salir? s/n");
 rta = getchar();
 while (rta != 's' && rta != 'n'){
 system("cls");
 printf("Error. Estas seguro que quiere salir ? s/n \n");
 rta = getchar();
 }

 break;

 default:
 system("cls");
 printf("Error. Esa opción no es válida.\n");
 system("pause");
 }

 } while (!(rta == 's'));*/
