using System;

class HelloWorld {
    static void Main() {
        Console.Write("Entre com um número: ");
        int num = int.Parse(Console.ReadLine());
        int quadrado = 0;
        quadrado = num * num;
        //Console.WriteLine(quadrado);
        
        string quadradoString = quadrado.ToString();
        int soma = 0; 
        
        for (int i = 0; i < quadradoString.Length; i++)
        {
            int algarismo = int.Parse(quadradoString[i].ToString());
            soma += algarismo; 
        }
        Console.WriteLine("A soma dos algarismos desse númro = {0} ", soma);
    }
}
