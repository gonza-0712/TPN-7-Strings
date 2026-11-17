#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cadena, resultado = "";

    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    for (int i = 0; i < cadena.length(); i++)
    {
        if (cadena.at(i) != ' ')
        {
            resultado += cadena.at(i);
        }
    }

    cout << "Cadena sin espacios: " << resultado << endl;
    return 0;
}
