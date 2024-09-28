puts "Введите количество банок с водой: "
bottles = gets.to_i
puts "Введите количество пустых банок для обмена на 1 полную: "
trade_needed = gets.to_i

water_consumed = bottles # Количество выпитой воды
iterations = 0 # Количество итераций
empty_bottles = bottles # Количество пустых банок воды

# Процесс обмена пустых банок на полные
if bottles <= 0 || trade_needed <= 0
  puts "Ошибка! Неверно введенные данные!"
else
  while empty_bottles >= trade_needed
    exchanged_bottles = empty_bottles / trade_needed # Количество полных банок, которые можно получить
    water_consumed += exchanged_bottles # Добавляем выпитую воду
    empty_bottles = empty_bottles % trade_needed + exchanged_bottles # Обновляем количество пустых банок
    iterations += 1 # Увеличиваем счетчик итераций
    puts "Итерация №#{iterations}: Выпито #{water_consumed} банок воды. Пустых банок осталось: #{empty_bottles}"
  end
end

# Вывод результатов
puts "Максимальное количество банок, которое можно выпить: #{water_consumed}"
puts "Общее количество итераций: #{iterations}"
