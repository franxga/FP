// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

//Variables globales: fuera de la funcion main
int n1, n2;
//Funciones
void pedirNumeros() {
	cout << "Dame el no. 1: ";
	cin >> n1;
	cout << "Dame el no. 2: ";
	cin >> n2;
}

void suma(int n1, int n2)
{
	//Suma de parametros
	cout << n1 + n2 << endl;
}
//No puedo definir funciones dentro de otra funcion
int main() // Punto de enntrada
{
	pedirNumeros();
	suma(n1, n2);//argumentos
}
#include <iostream>
#include <cmath>
using namespace std;

void areaCuadrado() {
	double lado;
	cout << "Lado del cuadrado: ";
	cin >> lado;
	cout << "Area del cuadrado: " << lado * lado << endl;
}

void areaRectangulo() {
	double base, altura;
	cout << "Base rectangulo: ";
	cin >> base;
		cout << "Altura rectangulo: ";
		cin >> altura;
		cout << "Area del Rectangulo: " << base * altura << endl;
}

void areaCirculo() {
	double radio;
	cout << "Radio circulo: ";
	cin >> radio;
	cout << "Area del Circulo: " << 3.1416 * radio * radio << endl;
}

void areaTriangulo() {
	double baseT, alturaT;
	cout << "Base Triangulo: ";
		cin >> baseT;
		cout << "Altura Triangulo: ";
		cin >> alturaT;
		cout << "Area Trinagulo: " << (baseT * alturaT) / 2 << endl;
}

void areaRombo() {
	double diagonalMayor, diagonalMenor;
	cout << "Diagonal mayor: ";
	cin >> diagonalMayor;
	cout << "Diagonal menor: ";
	cin >> diagonalMenor;
	cout << "Area del Rombo: " << (diagonalMayor * diagonalMenor) / 2 << endl;
}
void mostrarMenu() {
	cout << "Seleccione una figura geometrica: "<< endl;
	cout << "1. Cuadrado" << endl;
	cout << "2. Rectangulo" << endl;
	cout << "3. Circulo" << endl;
	cout << "4. Triangulo" << endl;
	cout << "5. Rombo"<< endl ;
	cout << "6. Salir" << endl;
	cout << "Ingrese su opcion: " ;
}
int main() {
	int opcion;
	do {
		mostrarMenu();
		cin >> opcion;

		switch (opcion) {
		case 1:
			areaCuadrado();
			break;
		case 2:
			areaRectangulo();
			break;
		case 3:
			areaCirculo();
			break;
		case 4:
			areaTriangulo();
			break;
		case 5:
			areaRombo();
			break;
		case 6:
			cout << "Saliendo ...";
			break;
		default:
			cout << "Invalido";
		}
	} while (opcion != 6);
}
