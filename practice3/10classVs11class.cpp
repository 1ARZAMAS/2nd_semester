#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

int main() {
    system("chcp 65001");
    vector<int> class10_scores = {75, 80, 95, 88, 76, 85, 92, 89, 90, 78};
    vector<int> class11_scores = {82, 91, 78, 84, 88, 95, 92, 79, 86, 85, 89, 90, 91, 87, 84};

    int total_class10 = accumulate(class10_scores.begin(), class10_scores.end(), 0);
    int total_class11 = accumulate(class11_scores.begin(), class11_scores.end(), 0);

    if (total_class10 > total_class11) {
        cout << "10 класс победил с " << total_class10 << " баллами";
    } else if (total_class11 > total_class10) {
        cout << "11 класс победил с " << total_class11 << " баллами";
    } else {
        cout << "У классов одно и то же количество баллов, победила дружба";
    }

    return 0;
}
