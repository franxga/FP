Ejercicio 4
Ejemplo string
//cin.ignore(); Cunado hay una cin ignora la instrucción cin
getline (cin,variable );
nombreCompoleto.lenght ()
Ejercicio 5  
Longitudtexto: Una variable tipo string se puede accersar a la funcion length() para obtener cuantos caracteres tiene.
Ejercicio 6 
Al ser una cadena (string) se puede obtener la posición de  cualquier caracter 

// Hola Munda.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include<iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>
using namespace std;

int main()
{
	// Ejercicio 4	
   //Introfucir una linea completa texto (string)
	// cin.ignore(); //Ignora la instruccion cin, cuando hay "cin >>" anteriores a esta linea de codigo 
	string nombreCompleto;
	cout << "introduce tu nombre completo ";
	getline(cin, nombreCompleto); //Obtienen una linea completa
	cout << "Tu nombre completo: " << nombreCompleto << endl;

	//Ejercicio 5
	// De que tamaño es un string
	cout << "Longitud de texto es: " << nombreCompleto.length() << endl;
	
	// Ejercicio 6
	// Como acceder un caracte en especifico de un texto (string)
	cout << "El primer caracter de nombre completo es: " << nombreCompleto[0] << endl;

	// Ejercicio 7
	//Cambiar un caracter  especifico en un texto (string)
	string cambio = "Hola";
	cambio[0] = 'h';
	cout << "Cambiar H por h: " << cambio << endl;

	//Ejercicio 8
	//Comvertir un string a MAYUSCULAS
	string textoMinusculas = "Texto a convertir";
	transform(textoMinusculas.begin(), textoMinusculas.end(), textoMinusculas.begin(), toupper);
	cout << "Texto en MAYUSCULAS: "<< textoMinusculas << endl;

	// Ejercicio 9
	// Convertir un string a  munisculas
	string textoMayusculas = "TEXTO A CONVERTIR";
	transform(textoMayusculas.begin(), textoMayusculas.end(), textoMayusculas.begin(), ::tolower);
	cout << "Texto en Minusculas: " << textoMayusculas << endl; 

	// Ejercicio 10
	// Inserta un texto dentro de otro texto
	string textoPrincipal = "Jose, ";
	textoPrincipal.insert(6, "Luis");
	cout << "Insertar un texto dentro de otro: " << textoPrincipal << endl;

	// Ejercicio 11 
	// Revertir un texto
	string textoRevertir = "Hola, mundo!";
	reverse(textoRevertir.begin(), textoRevertir.end());
	cout << "Texto revertido: " << textoRevertir << endl;

	// Ejercicio 12
	// Convertir un numero a un string
	int n1 = 123;
	string numeroAtexto = to_string(n1);
	cout << "Numero como string: " << numeroAtexto + " esto es un texto" << endl;

	//Ejercicio 13 
	// Convertir un string a número 
	string textoAnumero = "123";
	int n2 = stoi(textoAnumero);
	cout << "String como numero: " << n2 << endl; 
}
