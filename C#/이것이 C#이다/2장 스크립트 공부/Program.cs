// See https://aka.ms/new-console-template for more information
using System;
using static System.Console;

namespace Hello
{
    class Program
    {
        static void Main(string[] args)
        {
            if (args.Length == 0)
            {
                Console.WriteLine("사용법 : 2장 스크립트 공부 <이름> ");
                return;
            }

            WriteLine("Hello, {0}!", args[0]);
        }
    }
}