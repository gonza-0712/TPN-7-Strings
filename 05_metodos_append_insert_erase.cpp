#include <iostream>
#include <string>
using namespace std;

int main()
{
    string texto = "Hola mundo";

    cout << "Texto inicial: " << texto << endl;

    texto.append("!");
    cout << "Despues de append: " << texto << endl;

    texto.insert(5, " hermoso");
    cout << "Despues de insert: " << texto << endl;

    texto.erase(5, 8);
    cout << "Despues de erase: " << texto << endl;

    return 0;
}
