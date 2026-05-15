#include <stdio.h>
#include <stdlib.h> // Necesaria para rand() y srand()
#include <time.h>   // Necesaria para time()

int main() {
	int x = 0;
	int rango = 0;
	int suma = 0;
	int nMayores = 0;
	int nMenores = 0;
	
	srand(time(NULL));
	
	printf("ingrese el rango de numeros a generar: ");
	scanf("%i",&rango);
	
	
	printf("ingrese el valor valor de x: ");
	scanf("%i",&x);
	
	for(int i = 0; i < rango; i++){
		int numeroGenerado = rand() % 71;
		
		printf("numero generado %i \n: ", numeroGenerado);
		
		if(numeroGenerado > x/2){
			nMayores++;
		}
		
		if(numeroGenerado < x/2){
			nMenores++;
		}
		
		suma += numeroGenerado;
	}
	
	printf("suma total de numeros generados %i \n: ",x, suma);
	printf("numeros mayores a %i: %i \n: ", x, nMayores);
	printf("numeros menores a %i: %i \n: ", x, nMenores);
	
	return 0;
}

