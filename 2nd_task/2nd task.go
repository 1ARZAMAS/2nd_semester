package main

import (
	"fmt"
)

func main() {
	var bottles, tradeNeeded int
	fmt.Println("Введите количество банок с водой: ")
	fmt.Scan(&bottles)
	fmt.Println("Введите количество пустых банок для обмена на 1 полную:")
	fmt.Scan(&tradeNeeded)

	waterConsumed := bottles // Количество выпитой воды
	iterations := 0          // Количество итераций
	emptyBottles := bottles  // Количество пустых банок воды

	// Процесс обмена пустых банок на полные
	if bottles <= 0 || tradeNeeded <= 0 {
		fmt.Println("Ошибка! Неверно введенные данные!")
	} else {
		for emptyBottles >= tradeNeeded {
			exchangedBottles := emptyBottles / tradeNeeded             // Количество полных банок, которые можно получить
			waterConsumed += exchangedBottles                          // Добавляем выпитую воду
			emptyBottles = emptyBottles%tradeNeeded + exchangedBottles // Обновляем количество пустых банок
			iterations++                                               // Увеличиваем счетчик итераций
			fmt.Printf("Итерация №%d: Выпито %d банок воды. Пустых банок осталось: %d\n", iterations, waterConsumed, emptyBottles)
		}
	}

	// Вывод результатов
	fmt.Printf("Максимальное количество банок, которое можно выпить: %d\n", waterConsumed)
	fmt.Printf("Общее количество итераций: %d\n", iterations)
}
