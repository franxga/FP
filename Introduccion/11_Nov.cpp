// 11nov.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    /*Generar el código necesario en C++ para contar los números naturales de manera regresiva de nueve a cero. Tip : en lugar de sumar ++, necesitas restar --*/
    
    for (int i = 9; i >= 0; i--)
    {
        //instrucciones
        cout << i << " , ";
    }
    cout << endl;
    /*Generar el código necesario en C++ para contar los números de cero a 99. Tip : Necesitas inicializar el contador en uno y cambiar el limite a 99.*/

    for (int i = 0; i <= 99; i++)
    {
        
        cout << i << " , ";
    }
    cout << endl;

    /*Generar el código necesario en C++ para contar los números del uno al cien pero solo imprimir los números pares. Tip : usa un “if” y usa la operación residuo “%” 
    para determinar que sea número par, y si es par, entonces imprime el número. Tip : revisa la solución del examen o las clases, cuando un número era múltiplo de 3 o de 2.*/

    for (int i = 2; i <= 100; i=i+2)
    {
        if (i % 2 == 0)
        cout << i << " , ";
    }
    cout << endl;
    

/*Generar el código necesario en C++ solicitando el rango uno mínimo y uno máximo para generar la impresión de los números de manera secuencial de uno en uno, si ingresa 1 
como mínimo y 10 como máximo, deberá imprimir 1,2,3,4,5,6,7,8,9,10 Tip: Declara dos variables enteras (int) e insertalas en la instrucción for.*/
 
    int minimo, maximo;
    cout << "Dame el minimo ";
    cin >> minimo;
    cout << "Dame el maximo ";
    cin >> maximo;
    for (int i = minimo; i <= maximo; i++)
    {
        cout << i << " , ";
    }
    cout << endl;
 
        /*Generar el código necesario en C++ solicitando el rango uno máximo y uno mínimo para generar la impresión de los números de manera secuencial regresiva de uno en uno, 
        si ingresa 1 como mínimo y 10 como máximo, deberá imprimir 10,9,8,7,6,5,4,3,2,1 Tip: Declara dos variables enteras (int) e insertalas en la instrucción for.*/
    int minimo1, maximo1;
    cout << "Dame el minimo ";
    cin >> minimo1;
    cout << "Dame el maximo ";
    cin >> maximo1;
    for (int i = maximo1; i >= minimo1; i--)
    {
        cout << i << " , ";
    }
    cout << endl;

    return 0;
}
