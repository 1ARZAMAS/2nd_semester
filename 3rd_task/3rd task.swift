import Foundation

// Функция для проверки простоты числа
func isProst(num: Int) -> Bool {
    if num <= 1 {
        return false
    }
    for i in 2...Int(sqrt(Double(num))) {
        if num % i == 0 {
            return false
        }
    }
    return true
}

// Функция для подсчета количества простых чисел в массиве
func countProst(numbers: [Int]) -> Int {
    var count = 0
    for num in numbers {
        if isProst(num: num) {
            count += 1
        }
    }
    return count
}

func main() {
    print("Введите количество чисел: ")
        guard let n = Int(readLine()!), n > 0 else {
        print("Неверное количество чисел")
        return
    }

    var numbers = [Int]()
    print("Введите \(n) чисел через Enter: ")
    for _ in 0..<n {
        guard let num = Int(readLine()!), num > 0 else {
            print("Неверное число")
            return
        }
        numbers.append(num)
    }

    let result = countProst(numbers: numbers)
    print("Количество простых чисел: \(result)")
}

main()
