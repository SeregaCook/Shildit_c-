using System;

namespace Project_1_9_1
{
    class Program
    {
        static void Main(string[] args)
        {
            double futos;
            double meters;
            int contur;
            
            contur = 0;

            for (futos = 1.0; futos <= 25; futos++)
            {
                meters = futos / 3.28;
                
                Console.WriteLine(futos + "футов составляет " + meters + "метров.");
                
                contur++;

                if (contur == 10)
                {
                    Console.WriteLine();
                    contur = 0;
                }
            }
        }
    }
}