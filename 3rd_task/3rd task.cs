using System;

class Program{
    static void Main(){
        Console.Write("Введите количество чисел: ");
        int n = int.Parse(Console.ReadLine());

        int count = 0;
        Console.WriteLine("Введите {0} чисел: через Enter ", n);
        for (int i = 0; i < n; i++){
            int num = int.Parse(Console.ReadLine());
            if (IsPrime(num)){
                count++;
            }
        }

        Console.WriteLine("Количество простых чисел: " + count);
    }

    static bool IsPrime(int num){
        if (num <= 1){
            return false;
        }
        for (int i = 2; i * i <= num; i++){
            if (num % i == 0){
                return false;
            }
        }
        return true;
    }
}
