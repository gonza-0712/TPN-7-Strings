#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cadena, palabra;

    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    cout << "Ingrese una palabra para buscar: ";
    getline(cin, palabra);

    if (cadena.find(palabra) != string::npos)
    {
        cout << "La palabra \"" << palabra
             << "\" se encuentra en la cadena." << endl;
    }
    else
    {
        cout << "La palabra \"" << palabra
             << "\" no se encuentra en la cadena." << endl;
    }

    return 0;
}
