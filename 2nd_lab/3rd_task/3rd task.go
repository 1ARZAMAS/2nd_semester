package main

import (
	"fmt"
)

// Функция для проверки простоты числа
func isPrime(num int) bool {
	if num <= 1 {
		return false
	}
	for i := 2; i*i <= num; i++ {
		if num%i == 0 {
			return false
		}
	}
	return true
}

// Функция для подсчета количества простых чисел
func countPrimes(n int) int {
	count := 0
	fmt.Print("Введите число через пробел: ")
	for i := 0; i < n; i++ {
		var num int
		fmt.Scan(&num)
		if isPrime(num) {
			count++
		}
	}
	return count
}

func main() {
	var n int
	fmt.Print("Введите количество чисел: ")
	fmt.Scan(&n)

	result := countPrimes(n)
	fmt.Println("Количество простых чисел:", result)
}
