// Clase10oct.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


int main()
{
	//Operaciones Aritemeticas 
	int a = 10;
	int b = 20;
	int c;

	//Floats
	float x = 15.5;
	float y = 5.2;
	float z;

	// 1. Adicion 
	c = a + b;
	cout << "Resultados enteros: " << c << endl;
	z = x + y;
	cout << "Resultado flotantes: " << z << endl;

	// Sustración
	c = a - b;
	cout << "Resultado resta enteros: " << c << endl;
	z = x - y;
	cout << "Resultado resta flotantes: " << z << endl;

	// Multiplicacion
	c = a * b;
	cout << "Resultado multiplicacion enteros: " << c << endl;
	z = x * y;
	cout << "Resultado multiplicacion flotantes: " << z << endl;

	// Divicion
	c = a / b;
	cout << "Resultado divicion enteros: " << c << endl;
	z = x / y;
	cout << "Resultado divicion flotantes: " << z << endl;

	// Modulo (Residuo de la divicion)
	c = a % b;
	cout << "Resultado modulo: " << c << endl;

	// Operacion mixtas 
	z = a + x;
	cout << "Resultado suma mixta: " << z << endl;
	z = b - y;
	cout << "Resultado resta mixta: " << z << endl;
	z = a * y;
	cout << "Resultado multiplicacion mixta: " << z << endl;
	z = b / x;
	cout << "Resultado divicion mixta: " << z << endl;
	z = (a + b) * x / y;
	cout << "Resultado operacion mixta: " << z << endl;

	// Mas ejemplos float

	z = x + 10.3;
	cout << "Resultado suma flotantes" << z << endl;
	z = y * 2.5;
	cout << "Resultado multiplicacion flotantes" << z << endl;
	z = x / 2.0;
	cout << "Resultado divicion flotantes" << z << endl;
	z = y - 3.2;
	cout << "Resultado resta flotantes" << z << endl;

	// Combinacion de numeros enteros y flotantes 
	z = a + x - b / 2.0 + y * 1.5;
	cout << "Resultado operacion mixta entre enteros y flotntes: " << z << endl;

	// Combinaciones mas complejas
	z = (a + x) * (b + y) / (a * y);
	cout << "Resultado operacion complejas: " << z << endl;

	// operacions aritmeticas de tipo complejas
	double d1 = 7.4;
	z = a + d1;
	cout << "Resultado suma enteros: " << z << endl;
	z = b - d1;
	cout << "Resultado resta enteros: " << z << endl;
	z = d1 * x;
	cout << "Resultado multiplicacion enteros: " << z << endl;
	z = d1 / y;
	cout << "Resultado division enteros: " << z << endl;

	// numeros negativos
	int negInt = -25;
	float negFloat = -12.5;
			z = a + negInt;
		cout << "Resultado suma enteros positivo + negativo: " << z << endl;
		z = b + negInt;
		cout << "Resultado suma enteros positivos - negativos: " << z << endl;
		z = negFloat - x;
		cout << "Resultado resta enteros negativos - positivos : " << z << endl;
		z = negFloat / y;
		cout << "Resultado multiplicacion enteros negativo * positivo: " << z << endl;

	// incremento y decremento
		a++;
		cout << "Incremento en 1 en a: " << a << endl;
		b--;
		cout << "Decremento en 1 a b: " << b << endl;
		x+= 2.5;
		cout << "Sumar 2.5 a x: " << x << endl; 
		y -= 1.2;
		cout << "Restar 1.2 a y: " << y << endl; 


		double res = (1 /3.)* 3;
		cout << "Operacion:" << res << endl; 
		cout << (a > b) << endl;
		cout << (a < b) << endl;
		cout << ((a + 15) > b) << endl;


		return 0;
