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



		return 0;
}

