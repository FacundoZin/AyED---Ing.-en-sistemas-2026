#include <stdio.h>

int main() {
	
	int temperaturasTotales = 0;
	float temperaturaIngresada = 0;
	int cantidadTemperaturas0 = 0;
	int cantidadtemperaturasPositivas = 0;
	
	int sumatoriaTemperaturasNegativas = 0;
		
	printf("indique la cantidad de temperaturas que quiere ingresar: ");
	scanf("%i", &temperaturasTotales);
	
	printf("\n\n\n ");
	
	for(int i = 0; i < temperaturasTotales; i ++){
		
		printf("ingrese la temperatura %i: ", i + 1);
		scanf("%f", &temperaturaIngresada);
		
		if(temperaturaIngresada == 0){
			cantidadTemperaturas0 ++;
		};
		
		if(temperaturaIngresada > 0){
			cantidadtemperaturasPositivas ++;
		};
		
		if(temperaturaIngresada < 0){
			sumatoriaTemperaturasNegativas += (int)temperaturaIngresada;
		};
	};
	
	printf("\n La cantidad de temperaturas iguales a 0 es:  %i \n",cantidadTemperaturas0);
	printf("\n el promedio de temperaturas positivas: %f \n",(float)temperaturasTotales/100*cantidadtemperaturasPositivas);
	printf("\nla sumatoria de temperaturas bajo cero es: %i \n", sumatoriaTemperaturasNegativas);
	
	
	
	return 0;
}

