// Функция для проверки простоты числа
function isPrime(num) {
    if (num <= 1) {
        return false;
    }
    for (let i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

function countPrimes(n) {
    let count = 0;
    for (let i =0; i< n; i++){
        const num = parseInt(prompt('Введите число:'));
        if (isPrime(num)) {
        count++;
    }
    }
    return count;
}

const n = parseInt(prompt('Введите количество чисел:'));
const primeCount = countPrimes(n);
console.log('Количество простых чисел:', primeCount)
