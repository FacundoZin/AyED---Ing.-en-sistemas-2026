#include <stdio.h>

int main() {
	// Definimos las dimensiones
	const int VENDEDORES = 4;
	const int ARTICULOS = 3;
	const int DIAS = 7;
	
	// Arreglos para acumular datos (inicializados en 0)
	int cantArticulosPorVend[4] = {0, 0, 0, 0};     // Punto A
	float mayorVentaV3A1 = 0;                       // Punto B
	float totalPorArticulo[3] = {0, 0, 0};          // Punto C
	float totalPorVendedor[4] = {0, 0, 0, 0};       // Punto D
	
	int vend, art, i;
	float importe;
	char continuar;
	
	printf("--- Registro de Ventas (C puro) ---\n");
	
	do {
		printf("\nIngrese Vendedor (1-4): ");
		scanf("%d", &vend);
		printf("Ingrese Articulo (1-3): ");
		scanf("%d", &art);
		printf("Importe de la venta: ");
		scanf("%f", &importe);
		
		// Validamos que los datos sean correctos para no romper los arreglos
		if (vend >= 1 && vend <= 4 && art >= 1 && art <= 3) {
			
			// a) Cantidad de articulos por vendedor
			cantArticulosPorVend[vend - 1]++;
			
			// b) Mayor operacion de venta Art 1 por Vendedor 3
			if (vend == 3 && art == 1) {
				if (importe > mayorVentaV3A1) {
					mayorVentaV3A1 = importe;
				}
			}
			
			// Acumulamos para los promedios
			totalPorArticulo[art - 1] += importe;
			totalPorVendedor[vend - 1] += importe;
			
		} else {
			printf("Error: Vendedor o Articulo inexistente.\n");
		}
		
		printf("¿Desea cargar otra venta? (s/n): ");
		scanf(" %c", &continuar); // El espacio antes de %c es para limpiar el buffer
		
	} while (continuar == 's' || continuar == 'S');
	
	// --- MOSTRAR RESULTADOS ---
	printf("\n--- RESULTADOS FINALES ---\n");
	
	// A
	for (i = 0; i < VENDEDORES; i++) {
		printf("Vendedor %d: %d articulos vendidos.\n", i + 1, cantArticulosPorVend[i]);
	}
	
	// B
	printf("\nMayor venta del Vendedor 3 (Art 1): $%.2f\n", mayorVentaV3A1);
	
	// C (Promedio por artículo en 7 días)
	printf("\nImporte promedio por articulo:\n");
	for (i = 0; i < ARTICULOS; i++) {
		printf("Articulo %d: $%.2f\n", i + 1, totalPorArticulo[i] / DIAS);
	}
	
	// D (Promedio por vendedor en 7 días)
	printf("\nImporte promedio por vendedor:\n");
	for (i = 0; i < VENDEDORES; i++) {
		printf("Vendedor %d: $%.2f\n", i + 1, totalPorVendedor[i] / DIAS);
	}
	
	return 0;
}
