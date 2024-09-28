import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Введите количество банок с водой: ");
        int bottles = scanner.nextInt();
        System.out.println("Введите количество пустых банок для обмена на 1 полную:");
        int tradeNeeded = scanner.nextInt();

        int waterConsumed = bottles; // Количество выпитой воды
        int iterations = 0; // Количество итераций
        int emptyBottles = bottles; // Количество пустых банок воды

        // Процесс обмена пустых банок на полные
        if (bottles <= 0 || tradeNeeded <= 0) {
            System.out.println("Ошибка! Неверно введенные данные!");
        } else {
            while (emptyBottles >= tradeNeeded) {
                int exchangedBottles = emptyBottles / tradeNeeded; // Количество полных банок, которые можно получить
                waterConsumed += exchangedBottles; // Добавляем выпитую воду
                emptyBottles = emptyBottles % tradeNeeded + exchangedBottles; // Обновляем количество пустых банок
                iterations++; // Увеличиваем счетчик итераций
                System.out.println("Итерация №" + iterations + ": Выпито " + waterConsumed + " банок воды. Пустых банок осталось: " + emptyBottles);
            }
        }

        // Вывод результатов
        System.out.println("Максимальное количество банок, которое можно выпить: " + waterConsumed);
        System.out.println("Общее количество итераций: " + iterations);
    }
}
