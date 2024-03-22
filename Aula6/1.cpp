#include <iostream>
using namespace std;
int main()
{
    int contador = 0;
    double soma = 0;
    int quantidade = 0;
    int vezes=0;
    
    cout<<"Digite a quantidade de números\r\nque você usará para tirar a média: ";
    cin>>quantidade;
    
    while(contador<quantidade){
        cout<<"Digite o número a ser analisado: ";
        int num_analisado;
        cin>>num_analisado;
        if(num_analisado %2 == 0){
            soma += num_analisado;
            vezes ++;
        }
    contador++;

    }
    double media = soma/vezes;
    cout<<"Sua média é igual a "<<media;
    
    return 0;
}