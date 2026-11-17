#include <iostream>
#include <string>
using namespace std;

int main()
{
    string texto1, texto2;

    cout << "Ingrese el primer texto: ";
    getline(cin, texto1);

    cout << "Ingrese el segundo texto: ";
    getline(cin, texto2);

    // Metodo 1: substr() extrae una parte del primer texto.
    cout << "Primeros 3 caracteres del primer texto: "
         << texto1.substr(0, 3) << endl;

    // Metodo 2: replace() reemplaza una parte del primer texto.
    string modificado = texto1;
    if (modificado.length() >= 3)
    {
        modificado.replace(0, 3, "XXX");
    }
    else
    {
        modificado.replace(0, modificado.length(), "XXX");
    }
    cout << "Primeros caracteres reemplazados: " << modificado << endl;

    // Metodo 3: compare() compara los dos textos.
    int resultado = texto1.compare(texto2);

    if (resultado == 0)
    {
        cout << "Los dos textos son iguales." << endl;
    }
    else if (resultado < 0)
    {
        cout << "El primer texto aparece antes que el segundo." << endl;
    }
    else
    {
        cout << "El primer texto aparece despues que el segundo." << endl;
    }

    return 0;
}
