// Ejercicios G.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{

	/*Generar el código necesario en C# para declarar un arreglo que contenga los nombres de los meses del año y asignar dichos valores a cada posición. 
	Tip : Usar tipo de variable “string”y asina el nombre a cada posición relativa, es decir la posición cero corresponde a “enero”, la posición relativa uno
	corresponde a “febrero” etc.*/

	string nombreMeses[12]{ "Enero ", "Febrero ", "Marzo ", "Abril ", "Mayo ", "Junio", "Julio ", "Agosto ", "Septiembre ", "Octubre ", "Noviembre ", "Diciembre " };

	/*Imprime el arreglo usando la instrucción “for” usando el índice y accesa el arreglo meses e imprime los valores del arreglo, debe imprimir “enero”, “febrero”, etc.*/

	for (int i = 0; i < 12; i++) {
		cout << nombreMeses[i] << " , ";

	}
	cout << endl;

	/*Generar el código necesario en C# para declarar un arreglo que contenga los nombres de los planetas del sistema solar y asignar dichos valores a cada posición. 
	Tip : Usar tipo de variable “string y asina el nombre a cada posición relativa, es decir la posición cero corresponde a “mercurio”, la posición relativa uno corresponde 
	a “venus” etc.*/

	string sistemaSolar[8]{ "Mercurio ", "Venus ", "Tierra ", "Marte", "Jupiter ", "Saturno " , "Urano", "Neptuno" };

	/*Imprime el arreglo usando la instrucción “for” usando el índice y accesa el arreglo planetas e imprime los valores del arreglo, debe imprimir “mercurio”, “venus”, etc.*/

	for (int i = 0; i < 8; i++) {
		cout << sistemaSolar[i] << " , ";

	}
	cout << endl;


}
