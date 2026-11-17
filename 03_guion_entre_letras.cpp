#include <iostream>
#include <string>
using namespace std;

int main()
{
    string palabra, resultado = "";

    cout << "Ingrese una palabra: ";
    getline(cin, palabra);

    for (int i = 0; i < palabra.length(); i++)
    {
        resultado += palabra.at(i);

        if (i < palabra.length() - 1)
        {
            resultado += "-";
        }
    }

    cout << "Resultado: " << resultado << endl;
    return 0;
}
