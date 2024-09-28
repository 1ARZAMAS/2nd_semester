import System.IO

main :: IO ()
main = do
    putStrLn "Введите количество банок с водой: "
    bottles <- readLn :: IO Int
    putStrLn "Введите количество пустых банок для обмена на 1 полную:"
    tradeNeeded <- readLn :: IO Int

    let waterConsumed = bottles -- Количество выпитой воды
        iterations = 0 -- Количество итераций
        emptyBottles = bottles -- Количество пустых банок воды

    -- Процесс обмена пустых банок на полные
    if bottles <= 0 then
        putStrLn "Ошибка! Неверно введенные данные!"
    else do
        let loop accEmptyBottles accWaterConsumed accIterations
             | accEmptyBottles < tradeNeeded = do
                 putStrLn $ "Максимальное количество банок, которое можно выпить: " ++ show accWaterConsumed
                 putStrLn $ "Общее количество итераций: " ++ show accIterations
             | otherwise = do
                 let exchangedBottles = accEmptyBottles `div` tradeNeeded -- Количество полных банок, которые можно получить
                     newWaterConsumed = accWaterConsumed + exchangedBottles -- Добавляем выпитую воду
                     newEmptyBottles = accEmptyBottles `mod` tradeNeeded + exchangedBottles -- Обновляем количество пустых банок
                     newIterations = accIterations + 1 -- Увеличиваем счетчик итераций
                 putStrLn $ "Итерация №" ++ show newIterations ++ ": Выпито " ++ show newWaterConsumed ++ " банок воды. Пустых банок осталось: " ++ show newEmptyBottles
                 loop newEmptyBottles newWaterConsumed newIterations
        loop emptyBottles waterConsumed iterations
