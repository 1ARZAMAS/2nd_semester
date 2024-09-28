Bottles = int(input("Введите количество банок с водой: "))
TradeNeeded = int(input("Введите количество пустых банок для обмена на 1 полную: "))

waterConsumed = Bottles  # Количество выпитой воды
iterations = 0  # Количество итераций
emptyBottles = Bottles  # Количество пустых банок воды

# Процесс обмена пустых банок на полные
if Bottles <= 0 or TradeNeeded <= 0:
    print("Ошибка! Неверно введенные данные!")
else:
    while emptyBottles >= TradeNeeded:
        exchangedBottles = emptyBottles // TradeNeeded  # Количество полных банок, которые можно получить
        waterConsumed += exchangedBottles  # Добавляем выпитую воду
        emptyBottles = emptyBottles % TradeNeeded + exchangedBottles  # Обновляем количество пустых банок
        iterations += 1  # Увеличиваем счетчик итераций
        print(f"Итерация №{iterations}: Выпито {waterConsumed} банок воды. Пустых банок осталось: {emptyBottles}")

# Вывод результатов
print(f"Максимальное количество банок, которое можно выпить: {waterConsumed}")
print(f"Общее количество итераций: {iterations}") 