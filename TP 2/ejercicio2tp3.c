#include <stdio.h>

//18- Escriba el programa que calcule la suma de los N primeros números impares. 


int main() {
	
	int rangoCalculoImpares; 
	int numerosImpares[100];
	int cantidadNumerosImpares = 0;
	int numero = 0;
	int sumaNumerosImpares = 0;
	
	printf("Ingrese cual es el rango sobre el cual quiere calcular la suma de numeros pares: ");
	scanf("%i", &rangoCalculoImpares);
	
	int iterador = 0;
	
	for(iterador == 0; iterador < rangoCalculoImpares; iterador++){
		
		numero = iterador;
		
		if(numero % 2 != 0){
			numerosImpares[cantidadNumerosImpares+1]=numero;
			sumaNumerosImpares += numero;
		};
	};
	
	// 2. MOSTRAR los números impares guardados
	printf("\nLos numeros impares encontrados son:\n");
	for(int j = 0; j < cantidadNumerosImpares; j++) {
		printf("%d ", numerosImpares[j]);
	}
	
	printf("\n\nLa suma de los %d primeros numeros impares es: %d\n", cantidadNumerosImpares, sumaNumerosImpares);
	
	return 0;
}

