// 17oct.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	/*1.1 Realiza un código que ejecute las siguientes operaciones e imprima los resultados de
 ejecutar cada operación usando la instrucción cin*/
	int resultado = 3 + 5 * 2 / 2 - 1;
	cout << "El resultado de la operacion 3 + 5 * 2 / 2 – 1 es: " << resultado << endl;

	int resultado1 = 3 + 10 / 2 - 1;
	cout << "El resultado de la operacion 3 + 10 / 2 - 1 es: " << resultado1 << endl;

	int resultado2 = 3 + 5 - 1;
	cout << "El resultado de la operacion 3 + 5 - 1 es: " << resultado2 << endl;

	int resultado3 = 8 - 1;
	cout << "El resultado de la operacion 8 - 1 es: " << resultado3 << endl;

	int resultado4 = 1 / 3 * 3;
	cout << "El resultado de la operacion 1/3*3 es: " << resultado4 << endl;

	/*Escriba el código que pregunte al usuario por un número y escribir el resultado de la
potencia del número. De la siguiente manera:*/

/*Ingrese un número: 4
La potencia de 4 es 16*/

	float numero, potencia;

	cout << "Ingresa un numero: ";
	cin >> numero;

	potencia = numero * numero;

	cout << "La potencia de  " << numero << " es: " << potencia << endl;

	/*1.3 Escriba un programa que pregunte al usuario por el número de yardas a convertir en
metros. Recuerde que la unidad de conversión de una yarda equivale a 0.9144 metros.
Ingrese las yardas: 10
Número en yardas: 9.144*/

	float yardas, metros;

	cout << "Ingresar las yardas: ";
	cin >> yardas;

	metros = yardas * 0.9144;

	cout << "Numero en metros: " << metros << endl;

	/*1.4 Escriba el código de un programa que pregunte que calcule la depreciación de un auto
con valor de 200,000 pesos donde se depreciará por cinco años, considerando que solo se
puede depreciar el 80% del valor original pagado por el vehículo. Imprima en consola el
valor de deducción por cada año.
*/
	const float valorOriginal = 200000;
	const float porcentajeDepresiacion = 0.8;
	const int años = 5;

	float valorDepresiable = valorOriginal * porcentajeDepresiacion;

	float depreciacionAnual = valorDepresiable / años;

	for (int i = 1; i <= años; i++) {
		cout << "Año " << i << ": Deducción de " << depreciacionAnual << " pesos." << endl;
	}
	


	return 0;
}
