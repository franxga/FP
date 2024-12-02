#include <iostream>

using namespace std;
struct Alumno 
{
    //Atributos o propiedades
    string nombre;
    int cuenta;
};
int main()
{
    Alumno gael;
    gael.nombre = "Gael";
    gael.cuenta = 12345;

    Alumno jose;
    jose.nombre = "Jose";
    jose.cuenta = 54321;

    cout << "nombre: " << gael.nombre << endl;
    cout << "Cuenta: " << gael.cuenta << endl;
    cout << endl;
    cout << "nombre: " << jose.nombre << endl;
    cout << "Cuenta: " << jose.cuenta << endl;
}

#include <iostream>
#include <vector>

using namespace std;
struct Alumno 
{
    //Atributos o propiedades
public:
    string nombre;
    int cuenta;
    //Funciones en la estructura
public:
    static void altaAlumno(vector<Alumno> & v1)
    {
        Alumno alumno;
        cout << "Nombre: ";
        cin >> alumno.nombre;
        cout << "Numero de cuenta: ";
            cin >> alumno.cuenta;
            v1.push_back(alumno);
            
    }
    static void imprimeDatos(vector<Alumno> v1)
    {
        cout << "Tamno del vector:" << v1.size()
        << endl;
        for (int i=0;i<v1.size();i++)
        {
            cout << "nombre: " << v1[i].nombre << endl;
            cout << "Cuenta: " << v1[i].cuenta << endl;
        }
    }
};


int main()
{
    vector<Alumno> v;
    int numAlumnos;
    cout << "Num de alumnos a dar de alta: ";
        cin >> numAlumnos;
        for (int i = 0; i < numAlumnos; i++) {
            Alumno::altaAlumno(v);
        }
        Alumno::imprimeDatos(v);
}
