using System;
using System.Collections.Generic;
using System.Text;

namespace Codage
{
    class Romain
    {
        static void Rom()
        {
            Console.Write("Entrez votre chiffre en Romain : ");
            string nbrRom = Console.ReadLine();

            int nbrEntier = nbrRom.Length, total = 0, i = 0;
            
            do
            {
                if (i == nbrEntier - 1)
                    total += romToDec(nbrRom[i]);
                else if (romToDec(nbrRom[i]) >= romToDec(nbrRom[i + 1]))
                    total += romToDec(nbrRom[i]);
                else
                    total -= romToDec(nbrRom[i]);
                i++;
            }
            while (i < nbrEntier);

            Console.Write("Le nombre Romain en décimal est " + total);
            Console.ReadKey();
        }
        static int romToDec (char lettre)
        {
            int numero = 0;
            switch (lettre)
            {
                case 'M': numero = 1000;
                    break;
                case 'D': numero = 500;
                    break;
                case 'C': numero = 100;
                    break;
                case 'L': numero = 50;
                    break;
                case 'X': numero = 10;
                    break;
                case 'V': numero = 5;
                    break;
                case 'I': numero = 1;
                    break;
            }
            return numero;
        }
    }
}
