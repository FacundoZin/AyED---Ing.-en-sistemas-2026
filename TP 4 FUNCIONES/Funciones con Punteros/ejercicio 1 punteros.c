#include <stdio.h>
int CalculadoraPuntaje(float *punteroIndice,int numeroParticipante);

/*3- Se debe elaborar una funcion que solicite la cantidad de respuestas correcta,*/
/*	incorrectas y en blanco, correspondiente a N postulantes de un trabajo en una empresa*/
/*	muy conocida y devuelva su puntaje final considerando, que por cada respuesta correcta*/
/*	tendr 4 puntos, respuestas incorrectas tendr -1 y respuestas en blanco tendr 0.*/
/*	Adems, en dicha funcin se debe ir acumulando un ndice del postulante que es el*/
/*	puntaje * 1.5. Este ndice generado en la funcin por cada uno de los postulantes se va a*/
/*	ir sumando y luego de terminado el ingreso de datos se debe mostrar en la funcin*/
/*	principal. */

int main() {
	
	int cantidadParticipantes;
	float indice;
	
	printf("ingrese la cantidad de participantes: ");
	scanf("%d",&cantidadParticipantes);
	
	for(int i=0; i<cantidadParticipantes ++; i++){
		
		int NumeroParticipante = i+1;
		int puntaje = CalculadoraPuntaje(&indice, NumeroParticipante);
		
		printf("el puntaje del postulante es: %d y su indice: %2.0f",puntaje, indice);
	}
	
	return 0;
}

int CalculadoraPuntaje(float *punteroIndice, int numeroParticipante){
	
	int cantidadRespuestasCorrectas,cantidadRespuestasIncorrectas,CantidadEnBlanco;
	
	printf("ingrese la cantidad de respuestas correctas del participante %d:", numeroParticipante);
	scanf("%d", &cantidadRespuestasCorrectas);
	
	printf("ingrese la cantidad de respuestas incorrectas del participante %d:", numeroParticipante);
	scanf("%d", &cantidadRespuestasIncorrectas);
	
	printf("ingrese la cantidad de respuestas en blanco del participante %d:", numeroParticipante);
	scanf("%d", &CantidadEnBlanco);
	
	int puntaje = (cantidadRespuestasCorrectas*4) - cantidadRespuestasIncorrectas;
	*punteroIndice = puntaje*1.5; 
	
	return  puntaje;
}
