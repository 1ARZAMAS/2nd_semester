#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int Bottles, TradeNeeded;
    cout << "Введите количество банок с водой: " << endl;
    cin >> Bottles;
    cout << "Введите количество пустых банок для обмена на 1 полную:" << endl;
    cin >> TradeNeeded;

    int iterations = 0; // Количество итераций
    int emptyBottles = Bottles, waterConsumed = Bottles; // Количество пустых банок воды

    // Процесс обмена пустых банок на полные
    if (Bottles <= 0 or TradeNeeded <= 0) {
        cout << "Ошибка! Неверно введенные данные!" << endl;
    }
    else {
        while (emptyBottles >= TradeNeeded) {

            int exchangedBottles = emptyBottles / TradeNeeded; // Количество полных банок, которые можно получить

            waterConsumed += exchangedBottles; // Добавляем выпитую воду

            emptyBottles = emptyBottles % TradeNeeded + exchangedBottles; // Обновляем количество пустых банок

            iterations++; // Увеличиваем счетчик итераций
            cout << "Итерация №" << iterations << ": Выпито " << waterConsumed << " банок воды. Пустых банок осталось: " << emptyBottles << endl;
        }
    }
    // Вывод результатов
    cout << "Максимальное количество банок, которое можно выпить: " << waterConsumed << endl;
    cout << "Общее количество итераций: " << iterations << endl;
    return 0;
}
