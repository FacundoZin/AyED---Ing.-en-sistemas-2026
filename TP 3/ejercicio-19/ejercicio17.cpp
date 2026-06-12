#include <stdio.h>

//17- Un buque de carga traslada hasta 100 contenedores a tres diferentes puertos del país.
//	Los puertos se identifican con los números 1, 2 y 3.
//	De cada contenedor que el buque traslade se registran los siguientes datos:
//	- Identificación del contenedor (valor entero)
//	- Peso del contenedor en kg
//	- Puerto de arribo (un valor de 1 a 3).
//	El ingreso de datos finaliza con la identificación de un contenedor igual a cero (recuerde
//																					  que el buque tiene una capacidad máxima de 100 contenedores)
//	Se pide calcular e informar:
//	• El peso total que el buque debe trasladar
//	• La identificación del contenedor de mayor peso
//	• La cantidad de contenedores que debe trasladar a cada puerto
	

int main() {
	
	//entrada
	int pesoContenedor, puerto, identificacionContenedor;
	
	//variables extras
	int pesoContenedorMayor = 0;
	
	//salidas
	int contadorPuerto1, contadorPuerto2, contadorPuerto3, identificacionContenedorMayorPeso, pesoTotalBuque;
	
	
	printf("\n ingrese el identificador del contenedor: ");
	scanf("%i", &identificacionContenedor);
	
	while(identificacionContenedor != 0){
		
		printf("\n ingrese el puerto al cual se dirige su contenedor: ");
		scanf("%i", &puerto);
		
		printf("\n ingrese el peso contenedor: ");
		scanf("%i", &pesoContenedor);
		
		//procesos de validacion
		
		// proceso 1) verificar que el buque no tenga 100 contenedores cargados previamente.
		if(contadorPuerto1+contadorPuerto2+contadorPuerto3 == 100){
			printf("lo sentimos, el buque ya tiene 100 contenedores cargados, su capacidad esta completada");
		};
		
		// proceso 2) verificar que el numero del puerto ingresado no sea distinto de 1,2,3
		if(puerto !=1 && puerto != 2 && puerto != 3){
			printf("ingrese  un puerto valido");
		};
		
		//procesos de negocio
		
		// proceso 1) sumar el peso del contenedor en la variable peso total buque
		pesoTotalBuque += pesoContenedor;
		
		// proceso 2) comparar si el peso del contenedor ingresado es mayor al contenedor mas pesado que se cargo
		if(pesoContenedor > pesoContenedorMayor){
			pesoContenedorMayor = pesoContenedor;
			identificacionContenedorMayorPeso = identificacionContenedorMayorPeso;
		};
		
		// comparar el numero del puerto ingresado y sumar 1 al contador correspondiente 
		if(puerto == 1){
			contadorPuerto1 ++;
		};
		if(puerto == 2){
			contadorPuerto2 ++;
		};
		if(puerto == 3){
			puerto ++;
		};
		
		printf("\n ingrese el identificador del contenedor: ");
		scanf("%i", &identificacionContenedor);
	}
	
	printf("\n la cantidad de contenedores que van al puerto 1 es de: %i", contadorPuerto1);
	printf("\n la cantidad de contenedores que van al puerto 2 es de: %i",contadorPuerto2);
	printf("\n la cantidad de contenedores que van al puerto 3 es de: %i",contadorPuerto3);
	
	printf("\n identificacion contenedor mayor peso: %i", identificacionContenedorMayorPeso);
	
	printf("peso total del buque: %i", pesoTotalBuque);
	
	
	
	return 0;
}

