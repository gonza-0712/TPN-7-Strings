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

    if (texto1 > texto2)
    {
        cout << "El mayor alfabeticamente es: " << texto1 << endl;
    }
    else if (texto2 > texto1)
    {
        cout << "El mayor alfabeticamente es: " << texto2 << endl;
    }
    else
    {
        cout << "Los dos textos son iguales." << endl;
    }

    return 0;
}
