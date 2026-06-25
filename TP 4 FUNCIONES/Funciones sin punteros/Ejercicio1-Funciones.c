#include <stdio.h>
# include <conio.h>

void CalculadoraIncrementos(int limiteInferior, int LimiteSuperior,int Incremento);

/*1) Escribir una funcion que reciba tres argumentos numricos, que sern interpretados*/
/*	como lmite inferior, lmite superior e incremento de una serie de iteraciones.*/
/*	Imprimir la sucesin de enteros comprendidos entre ambos lmites, de incremento*/
/*	en incremento. Controlar que el usuario ingrese los tres argumentos requeridos*/
/*	mayores a 0 y que lmite superior sea mayor que limite inferior, abortando con un*/
/*	mensaje de error en caso contrario. */

int main() {
	
	int LimiteInferior,LimiteSuperior,Incremento;
	
	do{
		printf("\n ingrese un numero para el limite inferior que sea mayor a 0: ");
		scanf("%d",&LimiteInferior);
		
		printf("\n ingrese un numero para el limite superior que sea mayor a 0: ");
		scanf("%d", &LimiteSuperior);
		
		printf("\n ingrese un numero para el Incremento que sea mayor a 0: ");
		scanf("%d", &Incremento);
		
		
		if(LimiteInferior <= 0 || LimiteSuperior <= 0 || Incremento <= 0){
			printf("\n Todos los datos ingresados deben ser mayores a 0");
		};
		
		if(LimiteSuperior < LimiteInferior){
			printf("\n el limite superior debe ser mayor al inferior");
		}
		
	}while(LimiteInferior <= 0 || LimiteSuperior <= 0 || LimiteSuperior <= 0 || LimiteSuperior < LimiteInferior);
	
	CalculadoraIncrementos(LimiteInferior, LimiteSuperior, Incremento);
	
	
	return 0;
}

void CalculadoraIncrementos(int limiteInferior, int LimiteSuperior,int Incremento)
{
	for(int i = limiteInferior; i <= LimiteSuperior; i=i+Incremento){
		printf("%d ", i);
	};
}
