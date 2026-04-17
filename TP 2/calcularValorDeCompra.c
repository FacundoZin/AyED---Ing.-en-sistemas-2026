/* 1 - Archivos de cabecera */
#include <stdio.h>
#include <conio.h>

int main() {
	float valorCompraProducto1; 
	float valorCompraProducto2; 
	float valorCompraProducto3;
	
	printf("Ingrese el valor de compra del primer producto:");
		scanf("%f", &valorCompraProducto1);
	
	printf("\nIngrese el valor de compra del segundo producto:");
		scanf("%f", &valorCompraProducto2);
	
	printf("\nIngrese el valor de compra del tercer producto:");
		scanf("%f", &valorCompraProducto3);
	
	printf("\nLos precios de venta son: (Producto 1) %.2f, (Producto 2) %.2f, (Producto 3) %.2f", 
			valorCompraProducto1 * 1.30, 
		    valorCompraProducto2 * 1.30, 
		    valorCompraProducto3 * 1.30);
	
		
	return 0;
}

