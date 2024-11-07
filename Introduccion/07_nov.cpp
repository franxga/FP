// BREAK.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int numMes = 0;
	cout << "Num Mes "<< endl;
	cin >> numMes;
	switch (numMes)
	{
	case 1:
		cout << "Ene " << endl;
		break;
	case 2:
		cout << "Feb " << endl;
		break;
	case 3:
		cout << "Mar" << endl;
		break;
	case 4: 
		cout << "Abr" << endl;
		break;
	case 5:
		cout << "May" << endl;
		break;
	case 6:
		cout << "Jun" << endl;
		break;
	case 7:
		cout << "Jul " << endl;
		break;
	case 8:
		cout << "Agos " << endl;
		break;
	case 9:
		cout << "Sep" << endl;
		break;
	case 10:
		cout << "Oct" << endl;
		break;
	case 11:
		cout << "Nov" << endl;
		break;
	case 12:
		cout << "Dic" << endl;
		break;
	}


}
