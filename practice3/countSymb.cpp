#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    system("chcp 65001");
    string text = "dyh dyh dywi";
    unordered_map<char, int> frequency;

    for_each(text.begin(), text.end(), [&frequency](char c) {
        if (isalpha(c)) {
            frequency[tolower(c)]++;
        }
    });

    vector<pair<char, int>> sorted_frequency(frequency.begin(), frequency.end());
    sort(sorted_frequency.begin(), sorted_frequency.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });

    cout << "Частота букв в сообщении:" << endl;
    for (const auto& pair : sorted_frequency) {
        cout << pair.first << ": " << pair.second << " ";
    }

    return 0;
}
