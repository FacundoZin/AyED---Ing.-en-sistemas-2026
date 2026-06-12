#include <stdio.h>

int main() {
	
/*	15- Simular una calculadora básica con múltiples operaciones. Leer dos números enteros*/
/*		(A, B) y OP donde OP es un carácter que puede tomar los siguientes valores:*/
/*		‘ + ’, ‘ - ’, ‘ * ’, ‘ / ’, ‘ T ’.*/
/*		Se desea realizar la operación A OP B.*/
/*		Se pide mostrar cada uno de los resultados y la suma total de los mismos. El proceso se*/
/*		detiene cuando el código de operación es la letra ‘ T ’*/ 
	int numero1, numero2;
	char opcion;
	float resultado;
	
	printf("\nIngresa el signo de la operacion (+, -, *, /, T para salir): ");
	scanf(" %c", &opcion);
	
	printf("\nIngrese el primer numero: ");
	scanf(" %i", &numero1);
	
	printf("\nIngrese el primer numero: ");
	scanf(" %i", &numero2);
	
	switch(opcion){
		case '+':
			resultado =(float)numero1 + (float)numero2;
			printf("el resultado de la suma es %f", resultado);
			break;
		
		case '-':
			resultado = (float)numero1 - (float)numero2;
		    printf("el resultado de la resta es %.2f", resultado);
		break;
	}
	
	return 0;
}

