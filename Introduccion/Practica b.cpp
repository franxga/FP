// Practica b.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
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
	double valor_original = 200000;
	double porcentaje_depreciacion = 0.80;
	int anios = 5;

	
	double valor_a_depreciar = valor_original * porcentaje_depreciacion;

	
	double depreciacion_anual = valor_a_depreciar / anios;

	
	cout << "El valor de deduccion anual por depreciacion es: " << depreciacion_anual << " pesos" << endl;

	
	for (int i = 1; i <= anios; i++) {
		cout << "Año " << i << ": " << depreciacion_anual << " pesos" << endl;
	}

	/*1.5 Escriba un cálculo que calcule el porcentaje de deducción de impuestos del salario mensual de 25,000 pesos, 
	donde este se deducirá un impuesto fijo de 900 pesos, más una parte porcentual de 1.5% sobre el cálculo de sueldo 
	mensual – 900, Imprima el valor total del impuesto a deducir, y el sueldo neto que recibirá el empleado. */

	double salarioMensual = 25000;
	double impuestoFijo = 900;
	double porcentajeDeduccion = 0.015;

	double impuestoPorcentual = porcentajeDeduccion * (salarioMensual - impuestoFijo);

	double totalImpuesto = impuestoFijo + impuestoPorcentual;

	double sueldoNeto = salarioMensual - totalImpuesto;

	cout << "Total del impuesto a deducir: " << totalImpuesto << " peso " << endl;
	cout << "Sueldo neto: " << sueldoNeto << " peso " << endl;

	int multiplicacion = 3 * 4;
	cout << "1) 3*4: " << multiplicacion << endl;

	int division = 12 / 3;
	cout << "2) 12/3: " << division << endl;

	int modulo = 12 % 3;
	cout << "3) 12 % 3: " << modulo << endl;

	int modulo1 = 12 % 7;
		cout << "4) 12 % 7: " << modulo1 << endl;

		double suma = 3 + 3.0;
		cout << "5) 3 + 3.0: " << suma << endl;

		double divicionDecimal = 10 / 100;
		cout << "6) 10 / 100: " << divicionDecimal << endl;

		double potencia1 = pow(3, 2);
		cout << "7) 3^2: " << potencia1 << endl;

		int a = 10;
		int b = 20;

		cout << "(a > b): " << (a > b) << endl;
		cout << "(a < b): " << (a < b) << endl;
		cout << "(a == b): " << (a == b) << endl;
		cout << "(a != b): " << (a != b) << endl;
		cout << "(a + b) > 100: " << ((a + b) > 100) << endl;
		cout << "(a - b) == 0: " << ((a - b) == 0) << endl;
		cout << "(a * b) > 500: " << ((a * b) > 500) << endl;
		cout << "(a * b) < 100: " << ((a * b) < 100) << endl;
		cout << "(a - b) < 0: " << ((a - b) < 0) << endl;
		cout << "a < 20: " << (a < 20) << endl;



	return 0;
}
