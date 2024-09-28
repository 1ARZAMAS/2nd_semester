#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main() {
    system("chcp 65001");
    string sentence = "Annushka has already bought sunflower oil, and not only bought it, but even spilled it";
    istringstream iss(sentence);
    string word;
    string result;

    while (iss >> word) {
        reverse(word.begin(), word.end());
        result += word + " ";
    }

    cout << "Реверсированные слова: " << result;
}
