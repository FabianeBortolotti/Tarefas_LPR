#include <iostream>
using namespace std;

int main() {
    cout << "A Soma de todos os números ímpares múltiplos de 3 entre 50 a 500" << endl;
    int soma = 0;

    for (int i = 50; i <= 500; i++) {
        if (i % 2 != 0 && i % 3 == 0) {
            soma += i;
        }
    }

    cout << "é igual a " << soma << endl;

    return 0;
}
