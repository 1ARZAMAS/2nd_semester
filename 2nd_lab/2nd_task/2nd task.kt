import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    println("Введите количество банок с водой: ")
    val bottles = scanner.nextInt()
    println("Введите количество пустых банок для обмена на 1 полную:")
    val tradeNeeded = scanner.nextInt()

    var waterConsumed = bottles // Количество выпитой воды
    var iterations = 0 // Количество итераций
    var emptyBottles = bottles // Количество пустых банок воды

    // Процесс обмена пустых банок на полные
    if (bottles <= 0 || tradeNeeded <= 0) {
        println("Ошибка! Неверно введенные данные!")
    } else {
        while (emptyBottles >= tradeNeeded) {
            val exchangedBottles = emptyBottles / tradeNeeded // Количество полных банок, которые можно получить
            waterConsumed += exchangedBottles // Добавляем выпитую воду
            emptyBottles = emptyBottles % tradeNeeded + exchangedBottles // Обновляем количество пустых банок
            iterations++ // Увеличиваем счетчик итераций
            println("Итерация №$iterations: Выпито $waterConsumed банок воды. Пустых банок осталось: $emptyBottles")
        }
    }
    // Вывод результатов
    println("Максимальное количество банок, которое можно выпить: $waterConsumed")
    println("Общее количество итераций: $iterations")
}
