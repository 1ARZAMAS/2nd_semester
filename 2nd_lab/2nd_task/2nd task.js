let readline = require('readline');

let rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Введите количество банок с водой: ", (bottles) => {
    rl.question("Введите количество пустых банок для обмена на 1 полную: ", (tradeNeeded) => {
        bottles = parseInt(bottles);
        tradeNeeded = parseInt(tradeNeeded);

        let waterConsumed = bottles; // Количество выпитой воды
        let iterations = 0; // Количество итераций
        let emptyBottles = bottles; // Количество пустых банок воды

        // Процесс обмена пустых банок на полные
        if (bottles <= 0 || tradeNeeded <= 0) {
            console.log("Ошибка! Неверно введенные данные!");
        } else {
            while (emptyBottles >= tradeNeeded) {
                let exchangedBottles = Math.floor(emptyBottles / tradeNeeded); // Количество полных банок, которые можно получить
                waterConsumed += exchangedBottles; // Добавляем выпитую воду
                emptyBottles = emptyBottles % tradeNeeded + exchangedBottles; // Обновляем количество пустых банок
                iterations++; // Увеличиваем счетчик итераций
                console.log('Итерация №${iterations}: Выпито ${waterConsumed} банок воды. Пустых банок осталось: ${emptyBottles}');
            }
        }

        // Вывод результатов
        console.log('Максимальное количество банок, которое можно выпить: ${waterConsumed}');
        console.log('Общее количество итераций: ${iterations}');

        rl.close();
    });
});
