// Hola Mundo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    // Declaración de un numero entero
    int numeroEntero = 2385653;
    cout << numeroEntero << endl;

    //Declaración de un número corto
    int short numeroCorto = 32000;
    //Imprimir un numero corto
    cout << "Entero Corto " << numeroCorto << endl;
    
    //Declaración de un numero largo
    long int numeroLargo = 1234567890L;
    // Imprimir el valor de numero Largo
    cout << "Entero Largo " << numeroLargo << endl;

    //Declaracion de un numero entero sin signo
    unsigned int NumeroSinSigno = 400000000U;
    //Imprimir el valor de un numero sin signo
    cout << "Entero sin signo " << NumeroSinSigno <<endl;

    //Declaracion de un numero entero corto sin signo 
    unsigned short int NumeroCortonSinSigno = 6500;
    // Imprimir el valor de un numero corto sin signo
    cout << "Entero corto sin singno " << NumeroCortonSinSigno << endl;

    //Declaracion de un numero entero con signo explicito
    signed int NumeroconSigno = -65;
    //Imprimir el Valor de un numero con signo
    cout << "Entero con signo " << NumeroconSigno << endl;

    // Numero entero corto con signo explicito
    signed short int NumeroCortoConSigno = -3015;
    //Imprimir el valor de NumeroCortoConSigno
    cout << "Entero corto con Signo " << NumeroCortoConSigno << endl;

    //Numero entero largo con signo explicito
    signed long int NumeroLargoConSigno = -156351789132L;
    // Imprimir el valor de numerlargoconsigno
    cout << "Entero largo con Signo " << NumeroLargoConSigno << endl;

    //Numero entero largo largo
    long long int NumeroLargoLargo = 1561516416131564L;
    //Imprimir el valor de numerolargolargo
    cout << "Entero largo largo " << NumeroLargoLargo << endl;


}
