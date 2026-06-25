# Trabajo Práctico Nº 4: Funciones y Punteros en C

Bienvenido al módulo de **Funciones** de la cátedra de **Algoritmos y Estructuras de Datos**. En este apartado se encuentran los ejercicios resueltos correspondientes al TP 4, enfocados en la modularización de código a traves de funciones y el manejo de memoria mediante punteros.

---

## 📋 Temas Abordados

En este trabajo práctico exploramos las siguientes caracteristicas del lenguaje C:

### 1. Funciones sin Retorno (`void`)
Utilizadas para realizar tareas que no requieren devolver un dato específico al programa principal, como mostrar menús o imprimir resultados en consola.
```c
void saludar() {
    printf("¡Hola, bienvenido al TP 4!\n");
}
```

### 2. Funciones con Retorno de Valor
Implementación de lógica que procesa datos y devuelve un resultado (`int`, `float`, `char`, etc.) para ser utilizado posteriormente.
```c
int sumar(int a, int b) {
    return a + b;
}
```

### 3. Punteros y Pasaje por Referencia
Uno de los conceptos más potentes de C: **retornar más de un valor** desde una función modificando directamente las variables en memoria.
```c
void calcularResultados(int a, int b, int *suma, int *resta) {
    *suma = a + b;
    *resta = a - b;
}
```

---

## 📂 Estructura del TP

El repositorio está organizado en dos grandes categorías para facilitar la comprensión de los conceptos:

### 🔹 [Funciones sin Punteros](./Funciones%20sin%20punteros/)
Ejercicios introductorios sobre modularización básica:
- **Ejercicio 1:** Estructura básica de funciones.
- **Ejercicio 2:** Implementación con retorno de valor.
- **Ejercicio 3 (Calculador de Notas):** Lógica aplicada a promedios y validaciones.

### 🔹 [Funciones con Punteros](./Funciones%20con%20punteros/)
Ejercicios de nivel intermedio aplicando pasaje por referencia:
- **Ejercicio 1:** Introducción al manejo de direcciones de memoria.
- **Tienda Virtual (Verduleria):** Simulación de un sistema de ventas utilizando punteros para actualizar stocks y totales.

---

