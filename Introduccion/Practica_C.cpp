// 21 Oct.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
#include <string>
#include <iostream>}
using namespace std;

int main()
{
	/*1.1 Escriba el código que pregunte al usuario por un número y escribir el resultado del
  cuadrado. De la siguiente manera:

  Ingrese un número: 5
  El cuadrado de 5 es 25

  */
	float numero, potencia;

	cout << "Ingresa un numero: ";
	cin >> numero;

	potencia = numero * numero;

	cout << "La potencia de  " << numero << " es: " << potencia << endl;

	/*1.2 Escriba un código que solicite un número entero e imprima los resultados de x, 2x, 3x,
	4x y 5x. Donde x es el número ingresado por el usuario, y los subsecuentes implican
	multiplicar por 2, multiplicar por 3, multiplicar por 4 y multiplicar por 5, y escribir el
	resultado en el siguiente formato:

	Ingrese un número: 7
	7 -- 14 -- 21 -- 28 -- 35
	*/

	int x;
	cout << "Ingresa un numero: ";
	cin >> x;

		cout << x << "  " << x * 2 << "  " << x * 3 << "  " << x * 4 << "  " << x * 5 << endl;

	/*1.3 Escriba un programa que pregunte al usuario por su peso y en kilogramos y lo convierta en libras, 
	el factor de conversión es 2.2 libras por un kilo. */

		float pesoKg, pesoLibras;
		const float factorConversion = 2.2;

		cout << "Ingresa tu peso en kilogramos: ";
		cin >> pesoKg;

		pesoLibras = pesoKg * factorConversion;

		cout << "Tu peso en libras es: " << pesoLibras << " libras" << endl;

	/*1.4 Escriba el código de un programa que pregunte por 3 números (use 3 instrucciones de entrada). 
	Cree las tres variables de entrada, adicionalmente cree una variable que se llame Total y Promedio,
	donde Total contendrá la suma de las tres variables y Promedio que será el cálculo del promedio de los 3 números. */
		float num1, num2, num3, Total, Promedio;

		cout << "Ingresa el primer número: ";
		cin >> num1;

		cout << "Ingresa el segundo número: ";
		cin >> num2;

		cout << "Ingresa el tercer número: ";
		cin >> num3;

		Total = num1 + num2 + num3;
		Promedio = Total / 3;

		cout << "La suma de los tres números es: " << Total << endl;
		cout << "El promedio de los tres números es: " << Promedio << endl;

		/*1.5 Escriba un cálculo que calcule la propina de un Total, donde le pregunte al usuario por el total de la cuenta, 
		y el porcentaje de propina a aplicar y guardarlo en una variable que se llame Porcentaje y como resultado imprima 
		la cantidad a dar de propina. */

		float totalCuenta, porcentaje, propina;

		cout << "Ingresa el total de la cuenta: ";
		cin >> totalCuenta;

		cout << "Ingresa el porcentaje de propina a aplicar: ";
		cin >> porcentaje;

		propina = (totalCuenta * porcentaje) / 100;

		cout << "La cantidad a dar de propina es: " << propina << endl;

		/*1.6 Escriba el código que solicite un número al usuario y 
		si este número es mayor a 100, que imprima “El número es mayor a 100”, de lo contrario que imprima 
		“El número es menor o igual que 100” */
		
		int num;

		cout << "Ingresa un número: ";
		cin >> num;

		if (num > 100) {
			cout << "El número es mayor a 100" << endl;
		}
		else {
			cout << "El número es menor o igual que 100" << endl;
		}

		/*1.7 Escriba el código que solicite un número al usuario si este 
		número es menor a cero entonces imprima que “el número es negativo”, de lo contrario imprimir el “número es positivo” */

		int num_;

		cout << "Ingresa un número: ";
		cin >> num_;

		if (num_ < 0) {
			cout << "El número es negativo" << endl;
		}
		else {
			cout << "El número es positivo" << endl;
		}


		/*1.8 Escriba un programa que pregunte por el mail del usuario y guardarlo en una variable llamada “Miemail”, y 
		luego que pregunte por un password y se guarde en una variable llamada “Password_Ingresado”, 
		validar si el password es igual a “12345” entonces imprimir “Felicidades password correcto” de otra manera imprimir 
		“Su password es incorrecto” */

		string Miemail, Password_Ingresado;

		cout << "Ingresa tu email: ";
		cin >> Miemail;

		cout << "Ingresa tu password: ";
		cin >> Password_Ingresado;

		if (Password_Ingresado == "12345") {
			cout << "Felicidades, password correcto" << endl;
		}
		else {
			cout << "Su password es incorrecto" << endl;
		}

		/*1.9 Crear un código que convierta de grados farenheit a grados centígrados, usando una variable llamada Farenheith; 
		basado en la siguiente formula: 

         (𝐹𝑎𝑟𝑒𝑛ℎ𝑒𝑖𝑡ℎ − 32) ∗5/9
		 
		 
		 
		 Si el código es igual a 32 imprimir 0 “cero” grados centígrados, 
		 si es mayor o menor a 32 calcular los grados centígrados e imprimir los grados en número y centígrados en letra. 
		 */


		float Farenheith, Centigrados;

		cout << "Ingresa los grados Farenheit: ";
		cin >> Farenheith;

		if (Farenheith == 32) {
			cout << "0 grados centígrados" << endl;
		}
		else {
			Centigrados = (Farenheith - 32) * 5 / 9;
			cout << Centigrados << " grados centígrados" << endl;
		}

		/* 1.10 Crear el código que reciba el peso y la estatura del usuario,
		y calcule la masa corporal en base a la fórmula : 𝑚𝑎𝑠𝑎	𝑐𝑜𝑟𝑝𝑜𝑟𝑎𝑙 = 𝑝𝑒𝑠𝑜 / (𝑒𝑠𝑡𝑎𝑡𝑢𝑟𝑎 ∗ 𝑒𝑠𝑡𝑎𝑡𝑢𝑟𝑎). 
			Con el resultado desplegar los siguientes letreros en caso de que la masa corporal sea :
		Masa Corporal < 18.5 >= 18.5 y < 25 
		Abajo del peso normal Peso Normal >= 25 y < 30 >= 30 y < 35 
		Sobrepeso Obeso Clase 1 >= 35 y < 40 >= 40 
		Obeso Clase 2
		Obeso Clase 3 */

		float peso, estatura, masaCorporal;

		cout << "Ingresa tu peso en kilogramos: ";
		cin >> peso;
		cout << "Ingresa tu estatura en metros: ";
		cin >> estatura;

		masaCorporal = peso / (estatura * estatura);

		cout << "Tu masa corporal es: " << masaCorporal << endl;

		if (masaCorporal < 18.5) {
			cout << "Abajo del peso normal" << endl;
		}
		else if (masaCorporal >= 18.5 && masaCorporal < 25) {
			cout << "Peso normal" << endl;
		}
		else if (masaCorporal >= 25 && masaCorporal < 30) {
			cout << "Sobrepeso" << endl;
		}
		else if (masaCorporal >= 30 && masaCorporal < 35) {
			cout << "Obeso Clase 1" << endl;
		}
		else if (masaCorporal >= 35 && masaCorporal < 40) {
			cout << "Obeso Clase 2" << endl;
		}
		else if (masaCorporal >= 40) {
			cout << "Obeso Clase 3" << endl;
		}










}
