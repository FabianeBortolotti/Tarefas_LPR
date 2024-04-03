using System;

class HelloWorld {
    static void Main()
    {
        Console.Write("Digite suas horas de treino por dia: ");
        float hrs_dia = float.Parse(Console.ReadLine());
        float hrs_semanais = hrs_dia*5;
        Console.WriteLine("Você treinará {0} por semana.", hrs_semanais);
        
        float meta = 0;
        
        int dia=0;
        int semana=0;
        int mes=0;
        
        while(meta < 1000)
        {
            meta = meta + hrs_dia;
            dia++;
            
            if (dia % 5 == 0)
            {
                semana++;
                
            if (semana % 4.5 == 0) 
                {
                    mes++;
                }
                dia = 0; 
            }
        }

        Console.WriteLine("Para atingir 1000hrs de treinamento você precisa treinar {0} meses, {1} semanas e {2} dias", mes,semana,dia);
    }
            
}


