using System;
class HelloWorld {

    public struct Produto
    {
    public string nome;
    public int codigo;
    public float preco;
    public int quantidade;
    } 
    
  static void Main() {
    Produto[] produtos = new Produto[3];  
    for(int i = 0; i<3; i++)
    {
        produtos[i].nome = Console.ReadLine();
        produtos[i].codigo= int.Parse(Console.ReadLine());
        produtos[i].preco = float.Parse(Console.ReadLine());
        produtos[i].quantidade = int.Parse(Console.ReadLine());
        
        float total = produtos[i].quantidade*produtos[i].preco;
        
        Console.WriteLine("Produto: {0}, tolal: {1}", produtos[i].nome, total);
    }   
    
  }
}