#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cadena;

    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    if (cadena.length() > 0)
    {
        char primero = cadena[0];
        char ultimo = cadena[cadena.length() - 1];

        cout << "Primer caracter: " << primero << endl;
        cout << "Ultimo caracter: " << ultimo << endl;
    }
    else
    {
        cout << "No se ingreso ningun caracter." << endl;
    }

    return 0;
}
