using System;

class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8; // Установка кодировки для отображения символов в консоли

        Console.Write("Введите количество банок с водой: ");
        int bottles = int.Parse(Console.ReadLine());

        Console.Write("Введите количество пустых банок для обмена на 1 полную: ");
        int tradeNeeded = int.Parse(Console.ReadLine());

        int waterConsumed = bottles; // Количество выпитой воды
        int iterations = 0; // Количество итераций
        int emptyBottles = bottles; // Количество пустых банок воды

        // Процесс обмена пустых банок на полные
        if (bottles <= 0 || tradeNeeded <= 0)
        {
            Console.WriteLine("Ошибка! Неверно введенные данные!");
        }
        else
        {
            while (emptyBottles >= tradeNeeded)
            {
                int exchangedBottles = emptyBottles / tradeNeeded; // Количество полных банок, которые можно получить
                waterConsumed += exchangedBottles; // Добавляем выпитую воду
                emptyBottles = emptyBottles % tradeNeeded + exchangedBottles; // Обновляем количество пустых банок
                iterations++; // Увеличиваем счетчик итераций
                Console.WriteLine($"Итерация №{iterations}: Выпито {waterConsumed} банок воды. Пустых банок осталось: {emptyBottles}");
            }
        }

        // Вывод результатов
        Console.WriteLine($"Максимальное количество банок, которое можно выпить: {waterConsumed}");
        Console.WriteLine($"Общее количество итераций: {iterations}");
    }
}
