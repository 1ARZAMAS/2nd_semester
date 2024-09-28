import kotlin.math.sqrt

// Функция для проверки простоты числа
fun isPrime(num: Int): Boolean {
    if (num <= 1) return false
    for (i in 2..sqrt(num.toDouble()).toInt()) {
        if (num % i == 0) return false
    }
    return true
}

// Функция для подсчета количества простых чисел
fun countPrimes(n: Int): Int {
    var count = 0
    print("Введите числа через Enter:\n")
    for (i in 1..n) {
        val num = readLine()?.toIntOrNull() ?: 0
        if (isPrime(num)) count++
    }
    return count
}

fun main() {
    print("Введите количество чисел: ")
    val n = readLine()?.toIntOrNull() ?: 0
    val result = countPrimes(n)
    println("Количество простых чисел: $result")
}
