#include <stdio.h>
# include <conio.h>
char Sign (float num);
//2) Declarar una función denominada SIGN para determinar el signo de un número real.
//	(Se debe obtener “+”, “-”, y blanco para cero (0)). 

int main() {
	
	float numero;
	char signo;
	
	printf("\n ingrese un numero para calcular su signo: ");
	scanf("%f",&numero);
	
	signo = Sign(numero);
	
	printf("\n el signo del numero es: %c", signo);
	
	return 0;
}

char Sign (float num)
{
	if(num > 0){
		return '+';
	};
	if(num < 0){
		return '-';
	}else{
		return ' ';
	};
}
