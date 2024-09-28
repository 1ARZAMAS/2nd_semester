#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

struct ComputerParts {
    string name;
    double originalPrice;
    double discountedPrice;
};

void printDiscountedParts(const vector<ComputerParts>& parts) {
    for_each(parts.begin(), parts.end(), [](const ComputerParts& part) {
        double discount = (part.originalPrice - part.discountedPrice) / part.originalPrice * 100;
        if (discount > 25) {
            cout << "Название: " << part.name << ", Скидка: " << fixed << setprecision(2) << discount << "%" << endl;
        }
    });
}

int main() {
    system("chcp 65001");
    vector<ComputerParts> computerParts = {
        {"Процессор Intel Core i5-14400K", 30000.0, 24000.0},
        {"Видеокарта NVIDIA GeForce RTX 3080", 80000.0, 55000.0},
        {"Оперативная память HyperX Fury", 10000.0, 7500.0},
        {"Материнская плата ASUS ROG", 25000.0, 18000.0},
        {"Накопитель SSD Samsung", 15000.0, 11000.0},
        {"Корпус Aerocool", 8000.0, 5500.0},
        {"Блок питания Corsair", 12000.0, 8000.0}
    };

    printDiscountedParts(computerParts);

    return 0;
}
