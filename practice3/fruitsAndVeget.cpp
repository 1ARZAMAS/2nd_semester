#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    system("chcp 65001");
    vector<string> fruits = {"Абрикос", "Банан", "Ананас", "Вишня", "Инжир", "Груша"};
    vector<string> vegetables = {"Морковь", "Редис", "Перец", "Баклажан", "Кабачок"};

    vector<string> merged(fruits.size() + vegetables.size());
    merge(fruits.begin(), fruits.end(), vegetables.begin(), vegetables.end(), merged.begin());
    sort(merged.begin(), merged.end());
    cout << "Объединенный и отсортированный список: " << endl;
    for (const auto& item : merged){
        cout << item << " ";
    }
}
