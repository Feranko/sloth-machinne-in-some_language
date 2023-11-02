using System;
using System.IO;
using System.Collections.Generic;
public class main
{
    public static void spins()
    {
        Random rnd = new Random();
        int win = 0;
        int lose = 0;
        int[] array1 = new int[5];
        int[] array2 = new int[5];
        int[] array3 = new int[5];
        int spins = 0;
        Console.WriteLine("put the number of the spins : ");
        spins = Convert.ToInt32(Console.ReadLine());
        for(int a = 0; a < spins; a++) 
        {
            Console.WriteLine("--"+a+"--");
            for(int b = 0; b<5; b++) 
            {
                array1[b] = rnd.Next(3);
                array2[b] = rnd.Next(3);
                array3[b] = rnd.Next(3);
                Console.WriteLine("" + array1[b] + "," + array2[b] + "," + array3[b]);
            }
            if (array1[4] == array2[4])
            {
                if (array1[4] == array3[4])
                {
                    Console.WriteLine("Won");
                    win++;
                } else {
                    Console.WriteLine("Lose");
                    lose++;
                }
            } else {
                Console.WriteLine("Lose");
                lose++;
            }
            Console.WriteLine("\n");
        }
        Console.WriteLine("You won for :"+win+" and you lose for :"+lose);
        Console.WriteLine();
    }
    public static void Main(string[] args)
    {
        while(true)
        {
            spins();
        }
    }
}
