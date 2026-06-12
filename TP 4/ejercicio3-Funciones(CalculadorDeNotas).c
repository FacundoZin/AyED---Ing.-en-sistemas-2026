#include <stdio.h>
char Evaludador (float notaParcia1, float notaParcia2);

/*3) A partir de los siguientes datos ingresados por teclado: número de libreta*/
/*	universitaria, nota del 1er parcial y nota del 2do parcial, escriba un programa que*/
/*	invoque una función que devuelva una leyenda asociada a la condición del alumno:*/
/*	Promocionó “P”, Regularizó “R”, o Libre ”L”.*/
/*	Condiciones para determinar la condición del alumno:*/
/*	- Para la promoción: es necesario aprobar los 2(dos) parciales y que el promedio de*/
/*	ambos sea mayor o igual a 7(siete).*/
/*	- Para regularizar: es necesario aprobar los 2(dos) parciales.*/
/*	- Libre: si desaprueba al menos un parcial. Recordar que el parcial se aprueba con*/
/*	nota >= a 6.*/
/*	El fin de datos está dado con libreta universitaria igual a cero.*/
/*	Como fin de proceso mostrar la cantidad de promocionados, regulares y libres del*/
/*	curso.*/

int main() {
	int NumeroLibreta;
	float NotaPrimerParcial, NotaSegundoParcial;
	char nota;
	
	printf("\n ingrese el numero de libreta del alumno: ");
	scanf("%f", &NumeroLibreta);
	
	while(NumeroLibreta != 0){
		printf("\n ingrese la nota del parcial 1 : ");
		scanf("%f", &NotaPrimerParcial);
		
		printf("\n ingrese la nota del parcial 2 : ");
		scanf("%f", &NotaSegundoParcial);
		
		nota = Evaludador(NotaPrimerParcial, NotaSegundoParcial);
		
		printf("\n el estado del alumno es: %c", nota);
		
		printf("\n ingrese el numero de libreta del alumno: ");
		scanf("%f", &NumeroLibreta);
		
		
	}
	return 0;
}

char Evaludador (float notaParcia1, float notaParcia2){
	if(notaParcia1 < 6 || notaParcia2 < 6){
		return 'L';
	};	
	if((notaParcia1 + notaParcia2)/ 2 >= 7){
		return 'A';
	};
	if((notaParcia1 + notaParcia2)/ 2 < 7){
		return 'R';
	};
}

