#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    system("chcp 65001");
    vector<string> AlicesWords = {"Apples", "Ananas", "Fakeananas", "Astra", "Anaconda"};
    vector<string> BobsWords = {"Act", "Auto", "Aim", "Alter", "Anger", "Assist", "Bread", "Bark"};

    vector<string> allWords(AlicesWords.size() + BobsWords.size());
    merge(AlicesWords.begin(), AlicesWords.end(), BobsWords.begin(), BobsWords.end(), allWords.begin());
    sort(allWords.begin(), allWords.end());

    auto it = remove_if(allWords.begin(), allWords.end(), [](const string& word) {
        return word.empty() || word[0] != 'A';
    });
    allWords.erase(it, allWords.end());

    auto last = unique(allWords.begin(), allWords.end());
    allWords.erase(last, allWords.end());

    cout << "Уникальные слова, которые начинаются с \"А\"" << endl;
    for (const auto& word : allWords) {
        cout << word << " ";
    }

    return 0;
}
