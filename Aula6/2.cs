using System;

class HelloWorld {
  static void Main() {
    Console.WriteLine("Jogo iniciado!\r\nTente adivinhar o número selecionado entre 1 e 100.");
    Random numAleatorio = new Random();
    int valorInteiro = numAleatorio.Next(1,100);
    
    int quant_tentativas = 1;
    
    do{
        int limite_proximidade = 20;
        int entrada = int.Parse(Console.ReadLine());
        //Console.WriteLine("O número selecionado é:{0}",valorInteiro);
        
        int diferenca = Math.Abs(valorInteiro - entrada);
        
        if(diferenca <= limite_proximidade ){
            Console.WriteLine("\nChutou perto!");
        }
        else{
            Console.WriteLine("\nChutou longe!");
        }
        if(valorInteiro == entrada)
        {
            Console.WriteLine("\nAcertou!");
            Console.WriteLine("Tentativas = {0}", quant_tentativas);
            break;
        }
        quant_tentativas++;
        
    }while(true);
    
  }
}
