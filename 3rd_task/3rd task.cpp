#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Функция для проверки простоты числа
bool isProst(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Функция для подсчета количества простых чисел в векторе
int countProst(const vector<int>& numbers) {
    int count = 0;
    for (int num : numbers) {
        if (isProst(num)) {
            count++;
        }
    }
    return count;
}

int main() {
    setlocale(LC_ALL, "");
    int n;
    cout << "Введите количество чисел: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Введите " << n << " чисел: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int result = countProst(numbers);
    cout << "Количество простых чисел: " << result << endl;

    return 0;
}
