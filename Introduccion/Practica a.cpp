// 1er Tarea.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>
using namespace std;

int main()
{

	string ejercios00 = "Tipo de Variable ";
	cout << "Ejercicio del Modulo: " << ejercios00 << endl;

	string ejercicios01 = "Declaracion de Variables. ";
	cout << "Seccion: " << ejercicios01 << endl;

	/* 1.1 Declare una variable tipo int que tenga el número de materias que estás
	cursando actualmente. */
	int numeroMaterias = 5;
	cout << "1.1 Numero de materias que estoy cursando: " << numeroMaterias << endl;

	/*1.2Declare una variable tipo int que guarde el valor del cuatrimestre que
estas cursando.*/
	int valorCuatrimestre = 6;
	cout << "1.2 Valor del cuatrimestre que estas cursando: " << valorCuatrimestre << endl;

	/*Declara una variable tipo
string con identificador “materia”, e inicializar con el nombre de esta materia.*/
	string materia = "Fundamentos de Programacion ";
	cout << "1.3 Nombre de la materia: " << materia << endl;

	/*Declara una variable tipo string con identificador “cuenta”, e inicializar con el tu número de cuenta/matricula del Unitec. */
	string cuenta = "335014018 ";
	int n1 = stoi(cuenta);
	cout << "1.4 Numero de Cuenta: " << n1 << endl;

	/*Declara una variable de tipo string con identificador “nombre”, e inicializar con tu nombre(s) propio(s). */
	string nombre = "Francisco Gael ";
	cout << "1.5 Nombre propio: " << nombre << endl;

	/*Declara una variable de tipo string con identificador “apellidoPaterno”, e inicializar con tu apellido paterno. */
	string apellidoPaterno = "Palomar ";
	cout << "1.6 Apellido Paterrno: " << apellidoPaterno << endl;

	/*Declara una variable de tipo string con identificador “apellidoMaterno”, e inicializar con tu apellido materno. */
	string apellidoMaterno = "Garcia ";
	cout << "1.7 Apellido Materno: " << apellidoMaterno << endl;

	/*Declara una variable tipo long con identificador “celular”, e inicializar con tu número celular. */
	long long int celular = 5543711698l;
	cout << "1.8 Numero de Celular: " << celular << endl;

	/*Declara una variable tipo long con identificador “casa”, e inicializar con tu número de casa. */
	long int casa = 58228417l;
	cout << "1.9 Numero de casa: " << casa << endl;

	/*Declara una variable tipo string con identificador “correoQueMasUso”, e inicializar con el correo electrónico que más uses. */
	string correoQueMasUso = "gaelpalomar1@gmail.com ";
	cout << "1.10 Correo Electronico Personal: " << correoQueMasUso << endl;

	/*Declara una variable tipo string con identificador “correMyUnitec”, e inicializar con el correo electrónico que tienes asignado en el Unitec. */
	string correoMyUnitec = "francisco.palomar35@my.unitec.edu.mx ";
	cout << "1.11 Correo Unitec: " << correoMyUnitec << endl;

	/*Declara una variable tipo bool con identificador “blackboard”, e inicializar con valor true, si lo has usado anteriormente, de lo contrario inicializar con valor false. */
	bool blackboard = true;
	cout << "1.12 ¿He usado Blackboard antes? " << (blackboard ? "Si" : "No") << endl;

	//Ejercicios del Módulo : Tipo de Variables.

	string ejercios = "Tipo de Variable ";
	cout << "Ejercicio del Modulo: " << ejercios << endl;

	string ejercicios02 = "Analisis de errores de sintaxis ";
	cout << "Seccion: " << ejercicios02 << endl;

	// Sección : Análisis de errores de sintaxis.

	// Ejercicio 1 
	// int 1numero = 5; 

	int numero1 = 5;
	cout << "Ejercicio 1: " << numero1 << endl;

	// Ejercicio 2 
	// float valor@ = 3.14; 

	float valor = 3.14;
	cout << "Ejercicio 2: " << valor << endl;

	// Ejercicio 3 
	// double double = 9.81; 

	double gravedad = 9.81;
	cout << "Ejercicio 3: " << gravedad << endl;

	// Ejercicio 4
	// char letra = 'AB'; 

	char letra = 'A';
	cout << "Ejercicio 4: " << letra << endl;

	// Ejercicio 5
	// bool esverdadero = "true";

	bool verdadero = true;
	cout << "Ejercicio 5 Verdadero? " << (verdadero ? "Si" : "No") << endl;

	//Ejercicio 6
	// int numero = 10.5

	int numero = 10;
	cout << "Ejercicio 6: " << numero << endl;

	// Ejercicio 7
	// string nombre = 'Juan';

	string nombreJ = "Juan";
	cout << "Ejercicio 7: " << nombreJ << endl;

	// Ejercicio 8 
	// constant int PI = 3.14

	const float pi = 3.14;
		cout << fixed;
		cout << setprecision(2);
		cout << "Ejercicio 8: " << pi << endl;

		// Ejercicio 9
		// int suma = 5 +;

		int suma = 5 + 2;
		cout << "Ejercicio 9: " << suma << endl;

		// Ejercicio 10
		// int numero;
		// numero 10
		
		int numeroDiez = 10;
		cout << "Ejercicio 10: " << numero << endl;
		
		// Ejercicio 11
		// int numero = "diez"

		int numero10 = 10;
		cout << "Ejercicio 11: " << numero10 << endl;

		// Ejercicio 12
		// float altura = 1,75;

		float altura = 1.75;
		cout << "Ejercicio 12: " << altura << endl;
		
		// Ejercicio 13 = 
		// char inicial = "J"

		char inicial = 'J';
		cout << "Ejercicio 13: " << inicial << endl;

		// Ejercicio 14
		// bool esMayor = 1;

		bool esMayor = true;
		cout << "Ejecicio 14 es Mayor : " << (esMayor ? "1" : "2") << endl;
		
		// Ejercicio 15
		// string apellido = Juan; 

		string apellido = "Juan";
		cout << "Ejercicio 15: " << apellido << endl;

		// Ejercicio 16
		// int resultado = 5 * ;

		int resultado = 5 * 8;
		cout << "Ejercicio 16: " << resultado << endl;

		// Ejecicio 17 
		// double area = area 3.14 * radio^2;



		// Ejercicio 18
		// int edad = 25

		int edad = 25;
		cout << "Ejecicio 18: " << edad << endl;

		// Ejercicio 19
		// float peso = 70.5f;

		float peso = 70.5;
		cout << "Ejercicio 19: " << peso << endl;

		// Ejercicio 20 
		// int suma = 10 + 20

		int sumas = 10 + 20;
		cout << "Ejercicio 20: " << sumas << endl;

	return 0; 
}

