/* 1 - Archivos de cabecera */
#include <stdio.h>
#include <conio.h>

#define A -1
#define B -2
#define C 3

int main() {
	
	float x;
	float resultado;
	printf("Ingrese el valor de x para calcular la funcion: ");
	scanf("%f", &x);
	
	resultado = A * (x * x) + B * x + C;
	
	printf("El resultado de la funcion para x = %.2f es: %.2f\n", x, resultado);
	
	return 0;
}

