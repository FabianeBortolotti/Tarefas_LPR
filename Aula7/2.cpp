// exercício 1
#include <iostream>
using namespace std;
void media()
{   
    // ESCOPO DE VARIÁVEIS 
    int quantidade;
    cout << "Digite a quantidade de números a serem inseridos: ";
    cin >> quantidade;

    int soma = 0;
    int contador = 0;
    
    // EXECUÇÃO
    while (quantidade > 0) {
        int numero;
        cout << "Digite um número: ";
        cin >> numero;

        if (numero % 2 == 0) {
            soma += numero;
            contador++;
        }

        quantidade--;
    }

    if (contador > 0) {
        double media = static_cast<double>(soma) / contador;
        cout << "A média dos números pares é: " << media << endl;
    } else {
        cout << "Nenhum número par foi digitado." << endl;
    }

}

// exercício 3
void impar() {
    cout << "A Soma de todos os números ímpares múltiplos de 3 entre 50 a 500" << endl;
    int soma = 0;

    for (int i = 50; i <= 500; i++) {
        if (i % 2 != 0 && i % 3 == 0) {
            soma += i;
        }
    }

    cout << "é igual a " << soma << endl;
}

// exercício 4
void soma()
{   
    cout << "Digite um número: ";
    int numero;
    cin >> numero;

    int quadrado = numero * numero;
    int somaDigitos = 0;

    // Usando um loop while para iterar sobre os dígitos do quadrado do número
    while (quadrado > 0) {
        somaDigitos += quadrado % 10; // Adicionando o último dígito à soma
        quadrado /= 10; // Removendo o último dígito
    }

    cout << "A soma dos dígitos do quadrado de " << numero << " é: " << somaDigitos << endl;

}

int main(){
    int escolha;
    cout << "O que você deseja fazer?\r\n1 - Média\r\n2 - Ver a soma de múltiplos\r\n3 - Soma de dígitos"  << endl;
    cin >> escolha;
    
    switch (escolha) {
        
        case 1: media();
        break;
        
        case 2: impar();
        break;
        
        case 3: soma();
        break;
        
        default: cout << "Opção inválida."  << endl;
    }
}