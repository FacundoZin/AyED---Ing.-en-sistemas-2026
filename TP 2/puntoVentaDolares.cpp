/* 1 - Archivos de cabecera */
#include <stdio.h>
#include <conio.h>

#define A -1
#define B -2
#define C 3

int main() {
	
	float precioDolar;
	float cantidadDolares;
	float montoTotalOperacion;
	float comisionBanco;
	
	if(cantidadDolares > 501 && cantidadDolares < 1501){
	
		montoTotalOperacion = precioDolar*cantidadDolares;
		
		comisionBanco = montoTotalOperacion * 0.02;
		
		montoTotalOperacion+=comisionBanco
	};
	if(cantidadDolares >= 1501 && cantidadDolares < 3501){
		
		montoTotalOperacion = precioDolar*cantidadDolares;
		
		comisionBanco = montoTotalOperacion * 0.025;
		
		montoTotalOperacion+=comisionBanco
	};
	if(>= 3501){
		
		montoTotalOperacion = precioDolar*cantidadDolares;
		
		comisionBanco = montoTotalOperacion * 0.04;
		
		montoTotalOperacion+=comisionBanco
	};
	
	printf("El resultado de la funcion para x = %.2f es: %.2f\n", x, resultado);
	
	return 0;
}

