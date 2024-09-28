import Foundation

func main() {
    var Bottles: Int
    var TradeNeeded: Int
    print("Введите количество банок с водой: ")
    Bottles = Int(readLine()!)!
    print("Введите количество пустых банок для обмена на 1 полную:")
    TradeNeeded = Int(readLine()!)!

    var waterConsumed = 0 // Количество выпитой воды
    var iterations = 0 // Количество итераций
    var emptyBottles = Bottles // Количество пустых банок воды

    // Процесс обмена пустых банок на полные
    if Bottles <= 0 || TradeNeeded <= 0 {
        print("Ошибка! Неверно введенные данные!")
    } else {
        while emptyBottles >= TradeNeeded{
            let exchangedBottles = emptyBottles / TradeNeeded // Количество полных банок, которые можно получить
            waterConsumed += exchangedBottles // Добавляем выпитую воду
            emptyBottles = emptyBottles % TradeNeeded + exchangedBottles // Обновляем количество пустых банок
            iterations += 1 // Увеличиваем счетчик итераций
            print("Итерация №\(iterations): Выпито \(waterConsumed) банок воды. Пустых банок осталось: \(emptyBottles)")
        }
    }
    // Вывод результатов
    print("Максимальное количество банок, которое можно выпить: \(waterConsumed)")
    print("Общее количество итераций: \(iterations)")
}

main()
