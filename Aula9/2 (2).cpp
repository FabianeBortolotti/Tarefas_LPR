#include <iostream>
#include <string>
using namespace std;

struct Livro
{
 string titulo;
 string autor;
 int ano_publicacao;
 int numero_paginas;
 float preco;
};

int main()
{
    Livro livros[3];  
    for(int i=0; i<3; i++)
    {
     cin >> livros[i].titulo;
     cin >> livros[i].autor;
     cin >> livros[i].ano_publicacao;
     cin >> livros[i].numero_paginas;
     cin >> livros[i].preco;
    }
     float total = livros[0].preco + livros[1].preco + livros[2].preco;
     float media = (livros[0].numero_paginas + livros[1].numero_paginas + livros[2].numero_paginas)/3.0;
     cout << "Preço total = " << total << endl;
     cout << "Media = " << media << endl;
    
    return 0;
}