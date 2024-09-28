#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int sumPositiveOddPositions(const vector<int>& numbers) {
    int sum = 0;
    int i = 0;
    for_each(numbers.begin(), numbers.end(), [&](int num) {
        if (num > 0 && i % 2 != 0) {
            sum += num;
        }
        i++;
    });
    return sum;
}

int main() {
    system("chcp 65001");
    vector<int> numbers = {-5, -10, 3, -2, 7, 0, 15, 8, 4, 9};

    int result = sumPositiveOddPositions(numbers);
    cout << "Сумма положительных элементов в нечетных позициях: " << result << endl;

    return 0;
}
