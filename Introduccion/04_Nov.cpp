#include <iostream>
using namespace std;

int main()
{
/*1.16 Diseñar un programa que lea tres números A, B, C y visualice en pantalla el valor del
más grande. */

	int a = 1, b = 10, c = 100;
	if (a >= b and a >= c) {
		cout << "Mayor es a " << endl;
	}
	if (b >= a and b >= c) {
		cout << "Mayor es b " << endl;
	}
	if (c >= a and c >= b) {
		cout << "Mayor es c " << endl;
	}


/*1.17 Crear un programa que lea tres números diferentes, A, B, C, e imprime los valores
máximo y mínimo. El procedimiento consistirá en comparaciones sucesivas de parejas de
números. Cree el algoritmo, diagrama de flujo y código en C# */
	int a1 = 1, b1 = 10, c1 = 100;
	if (a1 <= b1 and a1 <= c1) {
		cout << "Menor es a " << endl;
	}
	if (b1 <= a1 and b1 <= c1) {
		cout << "Menor es b " << endl;
	}
	if (c1 <= a1 and c <= b1) {
		cout << "Menor es c " << endl;
	}
/*Ejercicio While */
	int i = 0;
	while (i <= 9) {
		cout << i << ", ";
		i++;
	}
	int i = 0, suma = 0;
	while (i <= 9) {
		cout << i << ", ";
		suma = suma + i;
		i++;
}
	cout << endl;
	cout << "Total " << suma << endl;

// EJERCICIOS
int opcion1 = 0;
do {
	cout << "Menu opciones " << endl;
	cout << "1.- Ejecuta opcion 1 " << endl;
	cout << "2.- Ejecuta opcion 2 " << endl;
	cout << "3.- Ejecuta opcion 3 " << endl;
	cout << "4.- Ejecuta opcion 4 " << endl;
	cout << "5.- Ejecuta opcion 5 " << endl;
	cout << "5.- Ejecuta opcion 5 " << endl;
	cout << "Salir " << endl;
	cin >> opcion1;
} while (opcion1 != 6);


string  respuesta;
;
do {
	cout << "Quieres salir del ciclo? [SI/NO]" << endl;
	cin >> respuesta;
	if (respuesta != "SI" and respuesta != "NO") {
		cout << "Respuesta no válida " << endl;
	}
} while (respuesta != "SI");



return 0;

}
