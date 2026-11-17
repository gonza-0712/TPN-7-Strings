#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cadena, invertida = "";

    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    for (int i = cadena.length() - 1; i >= 0; i--)
    {
        invertida += cadena.at(i);
    }

    cout << "Cadena invertida: " << invertida << endl;
    return 0;
}
