import math

# Функция для проверки простоты числа
def is_prime(num):
    if num <= 1:
        return False
    for i in range(2, math.isqrt(num) + 1):
        if num % i == 0:
            return False
    return True

# Функция для подсчета количества простых чисел
def count_primes():
    count = 0
    numbers = input("Введите числа через пробел: ").split()
    for num_str in numbers:
        num = int(num_str)
        if is_prime(num):
            count += 1
    return count

# Ввод количества чисел и вызов функции для подсчета простых чисел
result = count_primes()
print("Количество простых чисел:", result)