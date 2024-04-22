#include <iostream>
#include <string>
using namespace std;

int numero = 0;

void inverter()
{
    cout << "Digite uma sequência de números: ";
    cin >> numero;
    string numD = to_string(numero);

    for (int i = numD.length() - 1; i >= 0; --i)
    {
        cout << numD[i];
    }
}

int main()
{
    inverter();

    return 0;
}
