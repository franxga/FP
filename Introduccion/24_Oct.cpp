// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
# include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double peso, estatura;
    double mc;
    cout << "peso? ";

    cin >> peso;
    cout << endl;

    cout << "estatura? ";
    cin >> estatura;
    cout << endl;

    mc = peso / (estatura * estatura);
    cout << "mc : " << mc << endl;

    if (mc < 18.5) {
        cout << "Tu peso es bajo " << endl;
    }
    if (mc >= 18.5 and mc <= 25) {
        cout << "Peso normal " << endl;
    }
    if (mc >= 25 and mc <= 30) {
        cout << "Sobrepeso: " << endl;
    }
    if (mc >= 30 and mc <= 35) {
        cout << "Obeso clase 1 " << endl;
    }
    if (mc >= 35 and mc <= 40) {
        cout << "Obeso clase 2" << endl;
    }
    if (mc >= 40) {
        cout << "Obseo clase 3" << endl;
    }

    /*Crear dos variables de tipo int, que guarden el día y mes, del cumpleaños del usuario.
    Si la fecha corresponde a mes 9 y día 15, escribir en pantalla, “Feliz cumpleaños”*/

    int dia = 15;
    int mes = 9;
    cout << "cumpleaños del usario" << endl;

    cout << "Dia? ";
    cin >> dia;
    cout << endl;

    cout << "Mes? ";
    cin >> mes;
    cout << endl;

    if (mes == 9 and dia == 15) {
        cout << "Feliz cumpleaños" << endl;
    }
    /*Crear una variable que se llame velocidad, pregunta por este valor,
    si esta es negativa, escribir en pantalla “velocidad negativa”,
    si la velocidad es cero, escribir en pantalla “en reposo”, y
    si es positiva escribir en pantalla “velocidad positiva”.*/

    double velocidad;
    cout << "Dime tu velocidad: ";
    cin >> velocidad;

    if (velocidad < -1){
        cout << "Velocidad negativa" << endl;
    }
    if (velocidad == 0 ) {
        cout << "En reposo" << endl;
}
    if (velocidad > 1) {
        cout << "Velocidad Positiva" << endl;
    }

    /*Crear las siguientes variables de tipo int: huevos, mantequilla, 
    leche, harina, levadura, azucar y sal. Asigna valores aleatorios a cada variable,
    entre 1 y 5. Si todos los ingredientes tienen al menos un elemento, escribir en pantalla 
    “Puedes crear hot cakes” de lo contrario escribir en pantalla “No hay suficientes ingredientes”*/

    int huevos = 5;
        int mantequilla = 3;
        int leche = 5;
        int harina = 4;
        int levadura = 3;
        int azucar = 1;
            int sal = 4;
            
            cout << "Puedo crear hot cakes?" 
           


            if (mantequilla and leche and huevos and harina and levadura and azucar and sal) {
                cout << "Puedes crear hot cakes" << endl;
}
            if (leche and huevos and harina and levadura and azucar and sal) {
                cout << "No hay sufucientes ingredientes" << endl;
            }


}
